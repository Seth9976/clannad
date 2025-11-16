// 函数: sub_527530
// 地址: 0x527530
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1
int32_t ebx
ebx.b = 1
void* edx = nullptr
int32_t eax = *(arg2 + 0x34)

if (eax s>= 0 && eax s< 0x20)
    ebx.b = 0
    edx = *(eax * 0x10c + 0x1098064)

int32_t eax_3 = sub_5266b0(arg1 + 0x13b40, arg2 + 0x20, *(arg2 + 0x20), arg1 + 0x13b40, 
    &data_13130c0, 0xffffffff, edx, nullptr, 1)

if (eax_3 == 0)
    sub_526830(0xffffffff)
    sub_499600(&data_13130c0)
    return 0

if (ebx.b != 0)
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_3, data_72d6ac, data_719b6c, 0x61f328, 0x61f368), 
                data_72d6ac, data_719b6c, 0x61f328, 0x61f368), 
            data_72d6ac, data_719b6c, 0x61f328, 0x61f368)
        sub_4a1e40(3)
    
    sub_499600(&data_13130c0)
    return 0

if (*(arg2 + 0x34) s>= 0)
    sub_527110(arg2)

data_13130dc = 0xffffffff
data_13130e0 = 0xffffffff
data_13130e4 = 0xffffffff
data_13130e8 = 0
return 1
