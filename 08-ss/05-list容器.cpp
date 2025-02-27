//链表通过指针实现逻辑上的线性结构；
//STL中的链表是一个双向循环链表；
//链表只能通过访问当前节点中的指针域，才能得到下一个节点的存储地址，
//不支持随机访问，通过迭代器只能进行it++操作，不能像数组直接偏移好几个；
// 不像顺序表那样，是连续存储的，而每个元素的大小
//又相同，所以可以直接计算出任意位置元素的存储地址，支持随机访问；
//vector因为会动态调整容量，当插入时空间不足的话，经常会把当前数据
// 拷贝到更大片的连续空间，所以插入新元素后vector的迭代器往往就失效了，
//而list的迭代器不会失效，因为插入只会利用离散的空间；
//1.构造函数：
//list<T> L;//默认构造函数
//list(begin,end);//拷贝某list对象某区域的元素
//list(n,elem);
//list(const list& L);拷贝构造函数
//2.赋值：
//assign(begin,end);将某list对象某区域的元素赋给当前对象
//assign(n,elem);
//list& operator=(const list&L);
//3.交换函数：
//swap(L)；
//4.大小操作：
//size();
//empty();
//resize(num);重新指定list中的元素个数，若变长，则用默认值填充，否则删除超出的元素
//resize(num,elem)//变长时，用elem填充；
//5.插入删除操作
//push_back(elem);
//pop_back();
//push_front(elem);
//pop_front();
//insert(pos,elem);迭代器位置插入
//insert(pos,n,elem);
//insert(pos,begin,end);迭代器位置插入某对象某区间的元素；
//clear();清空容器
//erase(begin,end);区间删除；
//erase(pos);删除迭代器位置元素
//remove(elem);移除所有值为elem的元素；
//6.数据存取
//front();
//back();
//不支持[];//因为list的迭代器只能前移后移（每个节点有两个指针），不支持随机访问；
//不支持at函数；
//7.反转和排序
//reverse();//是list成员函数，可以调用；
// 注意：所有不支持随机访问迭代器的容器都不可以使用标准算法，
// 但内部会提供相应算法；
//sort();只能使用L.sort(begin,end)，默认升序，不可以直接使用标准算法sort();
//sort底层排序算法并非固定的，而是会根据容器中的元素动态选择使用的算法；