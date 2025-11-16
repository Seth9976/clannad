// 函数: sub_6e9990
// 地址: 0x6e9990
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* eax = arg2
char* var_8 = eax
int32_t edx = arg3[3]
int32_t ebx = arg3[2]

if (edx s< 8)
    int32_t eax_1 = sub_6ec810(arg3, 8)
    edx = arg3[3]
    ebx = eax_1
    eax = var_8

uint32_t ebx_1 = ebx u>> 0x18
arg3[2] = ebx << 8
arg3[3] = edx - 8

if (ebx_1.b s>= 0 && *(eax + 4) u> 0 && arg4[3] != 0 && *arg5 != 0)
    return 0

int32_t i = 6
int32_t var_14
int32_t* var_c = &var_14
void* ecx_9
int32_t edx_1

do
    edx_1 = arg3[3]
    i -= 1
    int32_t eax_4 = arg3[2]
    
    if (edx_1 s< 8)
        eax_4 = sub_6ec810(arg3, 8)
        edx_1 = arg3[3]
    
    arg3[2] = eax_4 << 8
    arg3[3] = edx_1 - 8
    *var_c = (eax_4 u>> 0x18).b
    ecx_9 = var_c + 1
    var_c = ecx_9
while (i != 0)

int16_t var_10

if (var_14 != 0x6f656874 || var_10 != 0x6172)
    return 0xffffffeb

if (ebx_1 == 0x80)
    if (*(arg6 + 8) != 0 && *(var_8 + 4) u<= 0)
        int32_t eax_19 = sub_6e9490(arg3, var_8)
        
        if (eax_19 s>= 0)
            return 3
        
        _memset(var_8, 0, 0x40)
        return eax_19
else if (ebx_1 == 0x81)
    if (arg4 == 0)
        return 0xffffffff
    
    if (*(var_8 + 4) != 0 && arg4[3] == 0)
        int32_t eax_14 = sub_6e97a0(arg3, arg4)
        
        if (eax_14 s>= 0)
            return 2
        
        sub_6e53a0(arg4)
        return eax_14
else if (ebx_1 == 0x82)
    if (arg4 == 0 || arg5 == 0)
        return 0xffffffff
    
    if (*(var_8 + 4) != 0 && arg4[3] != 0 && *arg5 == 0)
        void* eax_7 = sub_74c590(arg5, edx_1, ecx_9, 1, 0x2c8)
        
        if (eax_7 == 0)
            return 0xffffffff
        
        int32_t edi_3 = sub_6ec910(arg3, eax_7 + 0x140)
        
        if (edi_3 s>= 0)
            edi_3 = sub_6ec570(arg3, eax_7)
            
            if (edi_3 s>= 0)
                *arg5 = eax_7
                return 1
        
        sub_6e9960(eax_7)
        _free(eax_7)
        return edi_3

return 0xffffffec
