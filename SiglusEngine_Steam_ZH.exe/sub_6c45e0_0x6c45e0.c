// 函数: sub_6c45e0
// 地址: 0x6c45e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
LPARAM lParam = arg3
int32_t eax_2 = zx.d(lParam.w) - *(arg1 + 0x40) + *(arg1 + 0x38)
int32_t ebx_3 = (lParam u>> 0x10) - *(arg1 + 0x44) + *(arg1 + 0x3c)
int32_t* i = *(arg1 + 0x64)
int32_t var_8_1 = eax_2

if (i != *(arg1 + 0x68))
    do
        sub_6c04b0(*i, eax_2, ebx_3)
        eax_2 = var_8_1
        i = &i[1]
    while (i != *(arg1 + 0x68))
    
    lParam = arg3

if (*(arg1 + 0x78) != 0)
    SendMessageW(*(arg1 + 0x7c), 5, arg2, lParam)

return sub_6c7ba0(arg1 + 0x80) == 0
