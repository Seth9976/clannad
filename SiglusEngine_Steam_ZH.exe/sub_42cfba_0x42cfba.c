// 函数: sub_42cfba
// 地址: 0x42cfba
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
char* result = nullptr
int32_t edi_1 = 0
int32_t edx = 0

if (arg2 != 0)
    int32_t ebx
    int32_t var_c_1 = ebx
    char* esi_1 = arg1
    int32_t i
    
    do
        if (*esi_1 == 0x22)
            if (arg3 != 0)
                result[arg3] = 0x5c
            
            result = &result[1]
            
            if (edi_1 == 0)
                ebx.b = edx == 0
                edx = ebx
        
        edi_1 = 0
        
        if (edx != 0 && *esi_1 == 0x5c)
            if (arg3 != 0)
                result[arg3] = 0x5c
            
            result = &result[1]
            edi_1 = 1
        
        if (arg3 != 0)
            ebx.b = *esi_1
            result[arg3] = ebx.b
        
        result = &result[1]
        esi_1 = &esi_1[1]
        i = arg2
        arg2 -= 1
    while (i != 1)

return result
