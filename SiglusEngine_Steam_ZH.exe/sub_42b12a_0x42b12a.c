// 函数: sub_42b12a
// 地址: 0x42b12a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi
int32_t var_10 = edi
int32_t edi_1 = *(arg1 + 4)

if (arg2 u>= edi_1 || *arg2 != 0x30)
    return nullptr

int32_t eax = 0
int32_t ecx = 0
void* i

for (i = &arg2[1]; i u< edi_1; i += 1)
    int32_t edx
    edx.b = *i
    
    if (edx.b s< 0x30)
        break
    
    if (edx.b s> 0x37)
        break
    
    if ((eax & 0xe0000000) != 0)
        ecx = 1
    
    eax = sx.d(edx.b) + (eax << 3) - 0x30

if (arg3 != 0)
    *arg3 = eax

if (ecx != 0)
    sub_42aba3(*(arg1 + 0x30), arg1 + 8, 0x3eb, "octal value truncated to 32bits")

return i - arg2
