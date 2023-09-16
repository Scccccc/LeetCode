#define _CRT_SECURE_NO_WARNINGS 1


////20. 有效的括号(map)
class Solution {
public:
    bool isValid(string s)
    {
        stack<char> st;
        map<char, char> matchmap;
        matchmap['('] = ')';
        matchmap['['] = ']';
        matchmap['{'] = '}';

        for (auto& ch : s)
        {
            if (matchmap.count(ch))
            {
                st.push(ch);
            }
            else
            {
                if (st.empty())
                    return false;

                char top = st.top();
                st.pop();

                if (matchmap[top] != ch)
                    return false;

            }
        }

        return st.empty();
    }
};

//138. 复制带随机指针的链表(map)
class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*, Node*> NodeCopyMap;

        Node* cur = head;
        Node* copytail = nullptr;
        Node* copyhead = nullptr;
        while (cur)
        {
            Node* copyNode = new Node(cur->val);
            if (copytail == nullptr)
            {
                copyhead = copytail = copyNode;
            }
            else
            {
                copytail->next = copyNode;
                copytail = copytail->next;
            }
            NodeCopyMap[cur] = copyNode;
            cur = cur->next;
        }

        //控制random
        cur = head;
        Node* copy = copyhead;
        while (cur)
        {
            if (cur->random == nullptr)
                copy->random = nullptr;

            copy->random = NodeCopyMap[cur->random];
            copy = copy->next;
            cur = cur->next;
        }

        return copyhead;

    }
};


//349. 两个数组的交集
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());

        auto it1 = s1.begin();
        auto it2 = s2.begin();
        while (it1 != s1.end() && it2 != s2.end())
        {
            if (*it1 < *it2)
            {
                ++it1;
            }
            else if (*it1 > *it2)
            {
                ++it2;
            }
            else
            {
                v.push_back(*it1);
                ++it1;
                ++it2;
            }
        }
        return v;
    }
};