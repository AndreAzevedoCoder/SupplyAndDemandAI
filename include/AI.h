#ifndef AI_H
#define AI_H


class AI
{
    public:

        AI(int inputLength,int hiddenLength,int outputLength)
        {
            float input [inputLength];
            float weightsInput[inputLength];

            float hiddenLayers[hiddenLength][hiddenLength];
            float weightsHiddenLayers[hiddenLength][hiddenLength];

            float output[outputLength];
            float weightsOutput[outputLength];
        }


    protected:

    private:
};

#endif // AI_H
