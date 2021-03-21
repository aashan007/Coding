/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *		struct Data;
 * 		Data* data;
 *		Iterator(const vector<int>& nums);
 * 		Iterator(const Iterator& iter);
 *
 * 		// Returns the next element in the iteration.
 *		int next();
 *
 *		// Returns true if the iteration has more elements.
 *		bool hasNext() const;
 *	};
 */

class PeekingIterator : public Iterator
{
public:
    bool is_peeked_;
    int peek_ele_;
    PeekingIterator(const vector<int> &nums) : Iterator(nums)
    {
        // Initialize any member here.
        // **DO NOT** save a copy of nums and manipulate it directly.
        // You should only use the Iterator interface methods.
        is_peeked_ = false;
        peek_ele_ = -1;
    }

    // Returns the next element in the iteration without advancing the iterator.
    int peek()
    {
        if (is_peeked_)
            return peek_ele_;
        else
        {
            is_peeked_ = true;
            peek_ele_ = Iterator::next();
        }
        return peek_ele_;
    }

    // hasNext() and next() should behave the same as in the Iterator interface.
    // Override them if needed.
    int next()
    {
        if (is_peeked_)
        {
            is_peeked_ = false;
            return peek_ele_;
        }

        return Iterator::next();
    }

    bool hasNext() const
    {
        if (is_peeked_)
            return true;
        else
            return Iterator::hasNext();
    }
};