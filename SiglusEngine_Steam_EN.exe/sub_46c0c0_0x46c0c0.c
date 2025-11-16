// 函数: sub_46c0c0
// 地址: 0x46c0c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* edi = arg2
char* ebx = arg3

if (ebx s> edi)
    arg1 = ebx
    ebx = edi
    edi = arg1

if (ebx s< 0)
    return 

int32_t edx = data_7031bc

if (edi s>= edx)
    return 

void* i_1 = edi - ebx + 1
void* i_2 = i_1

if (i_1 s<= 0)
    return 

arg1 = arg4 + (ebx << 1)
int32_t* ecx_1 = arg1 * 0x650 + 0x72d74c
int32_t* var_8_1 = ecx_1
int32_t* esi_2 = arg1 * 0x7a0 + 0x98bf3c
void* i

do
    if (ebx s>= 0 && ebx s< edx)
        sub_4d6c40(&esi_2[-1], esi_2)
        
        if (arg5 != 0)
            uint32_t eax_1 = sub_4cfc80(arg5)
            sub_4d1c30(sub_4d6960(eax_1, esi_2, &esi_2[-1], eax_1, "objmoji06"), arg5, *esi_2, 
                eax_1)
            i_1 = i_2
        
        ecx_1 = var_8_1
        edx = data_7031bc
        *ecx_1 += 1
        esi_2[0xaf] += 1
    
    ecx_1 = &ecx_1[0x328]
    ebx = &ebx[1]
    esi_2 = &esi_2[0x3d0]
    var_8_1 = ecx_1
    i = i_1
    i_1 -= 1
    i_2 = i_1
while (i != 1)
