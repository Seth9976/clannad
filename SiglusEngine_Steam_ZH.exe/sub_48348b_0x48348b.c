// 函数: sub_48348b
// 地址: 0x48348b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* var_c = arg1
int32_t* ebx = arg2
uint32_t eax = ebx[4]
*arg4 = eax
int32_t* eax_1 = _malloc(eax)
*arg3 = eax_1

if (eax_1 == 0)
    return 0x8007000e

int32_t edi
int32_t var_18_1 = edi
*eax_1 = *ebx
void* edi_2 = &eax_1[1]
void* esi_2 = &ebx[1]
*edi_2 = *esi_2
void* edi_3 = edi_2 + 4
void* esi_3 = esi_2 + 4
*edi_3 = *esi_3
*(edi_3 + 4) = *(esi_3 + 4)
int32_t ecx_2 = eax_1[2]

if (ecx_2 == 0x70697a62)
    __builtin_strncpy(&eax_1[2], "bin ", 4)
else if (ecx_2 == 0x70697a74)
    __builtin_strncpy(&eax_1[2], "txt ", 4)

int32_t* ecx_3 = arg2
arg2 = nullptr
arg4 = &eax_1[4]
uint32_t arg_8
void* eax_5 = arg_8 + ecx_3
void* ebx_1 = &ebx[5]

if (ebx_1 u< eax_5)
    while (true)
        if (sub_4db9dd(*arg1, ebx_1 + 4, zx.d(*(ebx_1 + 2)), arg1[1], 0x8000) == 0)
            arg_8 = zx.d(*ebx_1)
            
            if (sub_4dba2f(*arg1, &arg_8) == 0)
                uint32_t ecx_4 = zx.d(*ebx_1)
                
                if (arg_8 == ecx_4)
                    int32_t esi_8
                    int32_t edi_7
                    edi_7, esi_8 = __builtin_memcpy(arg4, arg1[1], ecx_4 u>> 2 << 2)
                    __builtin_memcpy(edi_7, esi_8, ecx_4 & 3)
                    arg4 += zx.d(*ebx_1)
                    ebx_1 = ebx_1 + zx.d(*(ebx_1 + 2)) + 4
                    
                    if (ebx_1 u>= eax_5)
                        break
                    
                    continue
        
        arg2 = 0x80004005
        _free(*arg3)
        break

return arg2
