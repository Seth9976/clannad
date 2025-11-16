// 函数: sub_4864c7
// 地址: 0x4864c7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_34 = edi
int32_t result = 0xff
char* esi = &data_b98080
uint32_t eax_2

while (true)
    eax_2 = sub_48643c(data_b9a5e0)
    
    if (eax_2 == 0xffffffff)
        break
    
    if (eax_2 == 0x3e)
        break
    
    if (eax_2 != 0x2d && _isxdigit(eax_2) == 0)
        break
    
    *esi = eax_2.b
    esi = &esi[1]

*esi = 0

if (eax_2 == 0x3e)
    char* eax_3 = &data_b98080
    char i
    
    do
        i = *eax_3
        eax_3 = &eax_3[1]
    while (i != 0)
    
    if (eax_3 == 0xb980a5)
        char var_c
        char* var_38_2 = &var_c
        char var_10
        char* var_3c_1 = &var_10
        char var_14
        char* var_40_1 = &var_14
        char var_18
        char* var_44_1 = &var_18
        char var_1c
        char* var_48_1 = &var_1c
        char var_20
        char* var_4c_1 = &var_20
        char var_24
        char* var_50_1 = &var_24
        char var_28
        char* var_54_1 = &var_28
        int16_t* var_58_1 = &data_b9a5ae
        int16_t* var_5c_1 = &data_b9a5ac
        int32_t* var_60_1 = &data_b9a5a8
        
        if (sub_7621fb(&data_b98080, "%8x-%4x-%4x-%2x%2x-%2x%2x%2x%2x%2x%2x") == 0xb)
            int32_t eax_5
            eax_5.b = var_28
            data_b9a5b0 = eax_5.b
            eax_5.b = var_24
            data_b9a5b1 = eax_5.b
            eax_5.b = var_20
            data_b9a5b2 = eax_5.b
            eax_5.b = var_1c
            data_b9a5b3 = eax_5.b
            eax_5.b = var_18
            data_b9a5b4 = eax_5.b
            eax_5.b = var_14
            data_b9a5b5 = eax_5.b
            eax_5.b = var_10
            data_b9a5b6 = eax_5.b
            eax_5.b = var_c
            data_b9a5b7 = eax_5.b
            return 5

return result
