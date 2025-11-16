// 函数: sub_42d9f2
// 地址: 0x42d9f2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
sub_46b3eb(arg1, 0x100000, 0x10000)
sub_42a3cb(&arg1[6])
arg1[0xa9] = 0
sub_42d076(arg1)
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x10] = 1
arg1[0x11] = 0
arg1[0x12] = 0
arg1[0x13] = 1
arg1[0x14] = 1
arg1[0x15] = 1
__builtin_memset(&arg1[0x16], 0, 0x14)
arg1[0x9a] = 0
arg1[0x9b] = 0
__builtin_memset(&arg1[0x1b], 0, 0x1fc)
__builtin_memset(&arg1[0x9e], 0, 0x20)
arg1[0xa6] = 1
char* eax_1 = __strdup(sub_761a44(4, nullptr))
arg1[0xa7] = eax_1
bool cond:2_1

if (eax_1 != 0)
    char* esi_1 = eax_1
    void* const edi_3 = &data_ab55ec
    int32_t i = 2
    cond:2_1 = true
    
    while (i != 0)
        char temp0_1 = *esi_1
        char temp1_1 = *edi_3
        cond:2_1 = temp0_1 == temp1_1
        esi_1 = &esi_1[1]
        edi_3 += 1
        i -= 1
        
        if (temp0_1 != temp1_1)
            break

if (eax_1 == 0 || not(cond:2_1))
    sub_761a44(4, &data_ab55ec)

int32_t eax_2
int32_t mxcsr
int32_t mxcsr_1
int16_t x87control
int16_t x87control_1
eax_2, mxcsr_1, x87control_1 = __controlfp(mxcsr, x87control, 0, 0)
arg1[0xa8] = eax_2
int32_t mxcsr_2
int16_t x87control_2
mxcsr_2, x87control_2 = __controlfp(mxcsr_1, x87control_1, 0xffffffff, 0x8001f)
__controlfp(mxcsr_2, x87control_2, 0, 0x30000)
sub_416469()
return arg1
