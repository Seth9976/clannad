// 函数: sub_6dfad0
// 地址: 0x6dfad0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

WaitForSingleObject(data_4ebe314, 0xffffffff)
int32_t* i_2 = data_4ebe300
int32_t* i = i_2
int32_t* eax = data_4ebe304
int32_t* edi = eax
int32_t arg_4

for (; i != eax; i = &i[1])
    if (*i == arg_4)
        if (i != eax)
            int32_t* i_1 = sub_6c2a80(eax, eax, i, &arg_4)
            i_2 = data_4ebe300
            i = i_1
            eax = data_4ebe304
        
        break

if (i == i_2 && edi == eax)
    data_4ebe304 = i_2
else if (i != edi)
    int32_t eax_2 = (eax - edi) s>> 2
    arg_4 = eax_2
    _memcpy(i, edi, eax_2 << 2)
    data_4ebe304 = &i[arg_4]

ReleaseSemaphore(data_4ebe314, 1, nullptr)
BOOL result
result.b = 1
return result
