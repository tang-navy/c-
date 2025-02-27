//队列有队首和队尾指针，队列只能队头和队尾允许访问，所以也不允许有遍历行为；
//构造函数：
//queue<T>que;默认构造
//queue(const queue&que);拷贝构造
//复制操作：
//queue& operator=(const queue&que);
//数据存取：
//push(elem);
//pop();
//back();获取队尾元素
//front();获取队首元素
//大小操作：
//empty();
//size();