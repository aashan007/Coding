class FreqStack
{

    unordered_map<int, int> d_elem2Freq;

    unordered_map<int, vector<int> > d_freq2Stack;

    int d_maxFreq = 0;

public:
    void push(int elem)
    {
        int &freq = d_elem2Freq[elem];
        ++freq;
        d_freq2Stack[freq].push_back(elem);
        d_maxFreq = max(d_maxFreq, freq);
    }

    int pop()
    {

        vector<int> &maxFreqStack = d_freq2Stack[d_maxFreq];
        int freqTopElem = maxFreqStack.back();
        maxFreqStack.pop_back();

        // adjust freq for elem
        d_elem2Freq[freqTopElem]--;

        // if all elems in freq are popped, move one lower
        if (maxFreqStack.empty())
            --d_maxFreq; // this works because there's always elements with one lower frequency

        return freqTopElem;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 */