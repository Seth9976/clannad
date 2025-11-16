// 函数: sub_72d5a0
// 地址: 0x72d5a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xf4240
arg1[1] = 0
void* (** eax)(int32_t* arg1, void* arg2, void* arg3) = _malloc(0x54)

if (eax == 0)
    *(*arg1 + 0x14) = 0x38
    *(*arg1 + 0x18) = eax
    (**arg1)(arg1)

*eax = sub_72c900
eax[1] = sub_72ca40
eax[2] = sub_72cb10
eax[3] = sub_72cbc0
eax[4] = sub_72cc80
eax[5] = sub_72ccf0
eax[6] = sub_72cd60
eax[7] = sub_72d0c0
eax[8] = sub_72d220
eax[9] = sub_72d380
eax[0xa] = sub_72d480
eax[0xc] = 0x3b9aca00
eax[0xb] = var_c
__builtin_memset(&eax[0xd], 0, 0x18)
eax[0x13] = 0x54
arg1[1] = eax
void* result = sub_763199("JPEGMEM")

if (result != 0)
    char var_5 = 0x78
    char* var_18_2 = &var_5
    int32_t* var_1c_1 = &var_c
    result = sub_7621fb(result, "%ld%c")
    
    if (result s> 0)
        result.b = var_5
        int32_t eax_4
        
        if (result.b != 0x6d)
            eax_4 = var_c
        
        if (result.b == 0x6d || result.b == 0x4d)
            eax_4 = var_c * 0x3e8
        
        result = eax_4 * 0x3e8
        eax[0xb] = result

return result
