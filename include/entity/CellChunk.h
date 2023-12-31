#ifndef __CELL_CHUNK__H__
#define __CELL_CHUNK__H__
#include "SDL.h"
#include "Cell.h"
class CellChunk{
    public:
        CellChunk* leftCellChunk = NULL;
        CellChunk* rightCellChunk = NULL;
        CellChunk* upCellChunk = NULL;
        CellChunk* downCellChunk = NULL;
    private:
        int mStartGridX;
        int mStartGridY;
        int mWidth;
        int mHeight;
        int mMaxAltitude = 0;
        int mDrawMinY = 0;

        Cell** mCellArray = NULL;

        SDL_Renderer *mRenderer = NULL;
        SDL_Texture* mChunkTexture = NULL;
        TextRender *mTextRender = NULL;
        Text* mDebugInfo = NULL;
        bool mTextureCreated = false;
    public:
        CellChunk(SDL_Renderer* renderer, TextRender *textRender, int startGridX, int startGridY, int width, int height, Cell** cellArray);
        int getStartGridX();
        int getStartGridY();
        int getWidth();
        int getHeight();
        bool draw();
        bool drawDebugInfo();
        bool createTexture();
        bool updateTexture();
        ~CellChunk();
};
#endif