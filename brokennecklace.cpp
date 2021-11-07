/*
 ID: weiqixu1
 PROG: beads
 LANG: C++
 */

#include <stdio.h>

typedef struct beadBlock{
    int preW;
    int count;
    char type;
} beadBlock;

int main () {
    FILE *fin  = fopen ("beads.in", "r");
    FILE *fout = fopen ("beads.out", "w");

    int len;
    int maxL = 0,
        thisCount = 0,
        wCount = 0,
        pos = 0,
        blockLen = 0;

    // For this algorithm we compress the beads to blocks of beads.
    // At worst there is the same amount of block as bead. 
    // For example, rbrbrbrb.

    // We never need to keep track of the white beads that are
    // behind a block. This, method, included their count into the 
    // a block count.
    beadBlock blocks[351]; 
    char beads[351], thisChar, lookFor;

    fscanf(fin, "%d", &len);
    fscanf(fin, "%s", beads);

    // Discard all white beads at the beginning of the string.
    while ( beads[pos] == 'w' ){
        pos++;
        wCount++;
    }

    // If pos == len, it is all w
    // lookFor's value can be of anything
    // because it won't be used.
    if ( pos != len ) lookFor = beads[pos];
    blocks[blockLen].preW = wCount;
    for ( ; pos < len; pos++ ){
        thisChar = beads[pos];

        // If it is w we just increase 
        // the white count.
        if ( thisChar == 'w' ) {
            wCount++;
        } else {

          if ( thisChar != lookFor ){
            blocks[blockLen].count = thisCount;
            blocks[blockLen].type = lookFor;
            blockLen++;

            // Preparing the wCount for next block.
            blocks[blockLen].preW = wCount;
            thisCount = 0;
            lookFor = thisChar;
          }
          // For anything that is not a 'w', we turn wCount to zero.
          wCount = 0;
        }

        thisCount++;
    }

    blocks[blockLen].count = thisCount;
    blocks[blockLen].type = lookFor;
    blockLen++;

    if ( blockLen < 3 ){
        // If there are less than 3 block, it is easy.
        // If there is just www, the w count will be added
        // by doing block[0].preW.
        maxL = blocks[0].preW;
        maxL += blocks[0].count;
        if (blockLen == 2) maxL += blocks[1].count;
    } else {
        int lastBlock = blockLen - 1;
        // If there were more than 3 blocks,
        // we calculate the count of the border blocks first
        // and use the length of the higher count.

        // If block[0] and block[last] are the same type
        // we need to add an additional block.
        if ( blocks[0].type == blocks[lastBlock].type){
          int maxL2;
          // block[last] + block[0] + block[1]
          // block[last] + block[last - 1] + block[0]
          maxL = blocks[lastBlock].count;
          // When calculating a block, any white
          // succeeding a block will be inclusive in the count of
          // that block but not the white beads proceeding it.
          // Thus, when adding two block together that are next
          // to each other we do not need to add the
          // posW value to the count. However, we have to add preW
          // to the value of the block that does not
          // have any other block on the left of it.
          maxL += blocks[lastBlock].preW;
          maxL += blocks[0].preW;
          maxL += blocks[0].count;
          maxL += blocks[1].count;

          maxL2 = blocks[lastBlock - 1].preW;
          maxL2 += blocks[lastBlock - 1].count;
          maxL2 += blocks[lastBlock].count;
          maxL2 += blocks[0].preW;
          maxL2 += blocks[0].count;
          if ( maxL2 > maxL) maxL = maxL2;
        } else {
          // If last block and first block are not the same type,
          // just add block[last] to block[0]
          maxL = blocks[lastBlock].preW;
          maxL += blocks[lastBlock].count;
          maxL += blocks[0].preW;
          maxL += blocks[0].count;
        }
        // Then we loop.to calculate the length of all
        // blocks that are next to each other.
        for ( int i = 0; i < lastBlock; i++ ){
           // Reusing this count.
           thisCount = blocks[i].preW;
           thisCount += blocks[i].count;
           thisCount += blocks[i+1].count;
           if ( thisCount > maxL ) maxL = thisCount;
        }
    }

    fprintf(fout, "%d\n", maxL );

    return 0;
}
