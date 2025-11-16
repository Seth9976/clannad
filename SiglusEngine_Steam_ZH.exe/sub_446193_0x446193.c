// 函数: sub_446193
// 地址: 0x446193
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi

if (arg2 != 0)
    (*(*arg2 + 4))(arg2)

int32_t* eax_2 = *(arg1 + 0xc)

if (eax_2 != 0)
    (*(*eax_2 + 8))(eax_2)
    *(arg1 + 0xc) = 0

*(arg1 + 0xc) = arg2

if (arg2 != 0)
    *(arg1 + 4) = arg1
else
    *(arg1 + 4) = *(arg1 + 8)

return 0
