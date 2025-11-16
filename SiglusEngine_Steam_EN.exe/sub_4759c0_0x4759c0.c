// 函数: sub_4759c0
// 地址: 0x4759c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg4
int32_t ebx_1 = arg5 - esi
int32_t edi = arg3
arg5 = ebx_1
char* ecx_1 = arg6 + 1
int32_t i_1 = 4
int32_t edx = arg2 - edi
char* var_34 = ecx_1
int32_t result
int32_t i

do
    int32_t eax = data_702ffc
    int32_t ebx_2 = ebx_1 + esi
    int32_t edx_1 = data_703000
    int32_t eax_1 = data_702ff8
    int32_t eax_2 = data_702ff4
    char eax_3 = ecx_1[1]
    char eax_4 = *ecx_1
    void* edx_2 = data_702ff0
    char eax_5 = ecx_1[0xffffffff]
    int32_t ecx_3 = edx + edi
    int32_t edx_3 = data_702fec
    int32_t edx_4 = data_702fe8
    int32_t eax_6 = ecx_3
    int32_t var_2c_1 = eax_6
    
    if (ecx_3 s> ebx_2)
        eax_6 = ebx_2
        var_2c_1 = ebx_2
        ebx_2 = ecx_3
    
    int32_t var_50_1 = 0
    int32_t var_54_1 = 0xff
    int32_t var_58_1 = 0
    int32_t var_5c_1 = 0
    int32_t var_9c
    __builtin_memset(&var_9c, 0, 0x20)
    char ecx_5
    result, ecx_5 = sub_591560(eax_6, edx_3, edx_4, edx_2, edi.b, eax_6.b, esi.b, eax_6, eax_5, 
        eax_4.d, eax_3.d, eax_2, eax_1, eax, edx_1, ecx_3.b)
    
    if (var_2c_1 != ebx_2)
        int32_t var_50_2 = 0
        int32_t var_54_2 = 0xff
        int32_t var_58_2 = 0
        int32_t var_5c_2 = 0
        int32_t var_9c_1
        __builtin_memset(&var_9c_1, 0, 0x20)
        sub_591560(result, edx_3, edx_4, edx_2, edi.b, ebx_2.b, esi.b, ebx_2, eax_5, eax_4.d, 
            eax_3.d, eax_2, eax_1, eax, edx_1, ecx_5)
        result = var_2c_1 + 1
        
        if (result != ebx_2)
            int32_t var_50_3 = 0
            int32_t var_54_3 = 0xff
            int32_t var_58_3 = 0
            int32_t var_5c_3 = 0
            int32_t ebx_3 = eax_3.d
            int32_t var_9c_2
            __builtin_memset(&var_9c_2, 0, 0x20)
            sub_591560(result, edx_3, edx_4, edx_2, edi.b, result.b, edi.b, ebx_2 - 1, eax_5, 
                eax_4.d, ebx_3, eax_2, eax_1, eax, edx_1, (ebx_2 - 1).b)
            
            if (result != ebx_2 - 1)
                int32_t var_50_4 = 0
                int32_t var_54_4 = 0xff
                int32_t var_58_4 = 0
                int32_t var_5c_4 = 0
                int32_t var_9c_3
                __builtin_memset(&var_9c_3, 0, 0x20)
                result = sub_591560(result, edx_3, edx_4, edx_2, esi.b, result.b, esi.b, ebx_2 - 1, 
                    eax_5, eax_4.d, ebx_3, eax_2, eax_1, eax, edx_1, (ebx_2 - 1).b)
    
    edi += 1
    ebx_1 = arg5
    ecx_1 = &var_34[3]
    esi -= 1
    var_34 = ecx_1
    i = i_1
    i_1 -= 1
while (i != 1)
return result
