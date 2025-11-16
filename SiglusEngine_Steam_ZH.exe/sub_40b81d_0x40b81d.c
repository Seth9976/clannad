// 函数: sub_40b81d
// 地址: 0x40b81d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* ebx = arg2
int32_t edi
int32_t var_c = edi
int32_t __saved_esi = 0

if (sub_40b60c(ebx) == 0)
    return 0x8876086c

if (sub_40b39f(ebx, 0) != *(arg1 + 0x238))
    return 0x8876086c

sub_416380(1)
int32_t* eax_3 = *(arg1 + 0x230)
void* eax_4 = (*(*eax_3 + 0x158))(eax_3, ebx, &arg2)
sub_416380(0)

if (eax_4 s< 0)
    arg2 = nullptr

sub_40889e(arg1 + 0xc, ebx)
int32_t* eax_6 = *(arg1 + 8)

if (eax_6 != 0)
    (*(*eax_6 + 8))(eax_6)
    *(arg1 + 8) = 0

*(arg1 + 8) = arg2
return 0
