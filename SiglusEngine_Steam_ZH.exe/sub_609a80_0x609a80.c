// 函数: sub_609a80
// 地址: 0x609a80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t result = arg3
void* edx = arg1
void* var_8_1 = edx

if (result s< arg4)
    int32_t ecx = result * 0x8ec
    int32_t i_1 = arg4 - result
    arg3 = ecx
    int32_t i
    
    do
        void* edi_2 = *(edx + 0xa4) + ecx
        sub_609f10(edi_2 + 0x25c, arg2)
        sub_5e4630(edi_2 + 0xa0, arg2)
        sub_60a170(edi_2 + 0x394, arg2)
        sub_5adf00(edi_2 + 0x4cc, arg2)
        sub_609cd0(edi_2 + 0x6c4, arg2)
        sub_5fd050(edi_2 + 0x77c, arg2)
        result = sub_5fcd80(edi_2 + 0x834, arg2)
        edx = var_8_1
        ecx = arg3 + 0x8ec
        arg3 = ecx
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
