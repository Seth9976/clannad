// 函数: sub_44354c
// 地址: 0x44354c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
int32_t result = sub_416380(1)

if ((*(arg1 + 0x119) & 2) == 0)
    int32_t ebx_1 = **(arg1 + 0xc)
    int32_t* eax = *(arg2 + 8)
    int32_t eax_1 = (*(*eax + 0xc))(eax, arg2 + 4)
    
    if ((*(ebx_1 + 0x16c))(*(arg1 + 0xc), eax_1) s< 0)
        result = sub_416380(0)
        *(arg2 + 4) = 0
        *(arg2 + 0x14) &= 0xfffffffc
    else
        result = sub_416380(0)
        *(arg2 + 0x14) |= 3

return result
