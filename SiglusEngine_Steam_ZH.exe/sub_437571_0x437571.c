// 函数: sub_437571
// 地址: 0x437571
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_4 = ebp
int32_t esi
int32_t var_8 = esi
void* esi_1 = arg2
int32_t edi
int32_t var_c = edi
int32_t* esp_1 = &var_c

if (esi_1 != 0)
    int32_t eax_1 = *(esi_1 + 4)
    
    if (eax_1 == 1)
        while (*(esi_1 + 4) == 1)
            *(esp_1 - 4) = arg3
            *(esp_1 - 8) = *(esi_1 + 8)
            esp_1 -= 8
            sub_437571()
            esi_1 = *(esi_1 + 0xc)
            
            if (esi_1 == 0)
                break
        
        if (esi_1 != 0)
            *(esp_1 - 4) = arg3
            *(esp_1 - 8) = esi_1
            esp_1 -= 8
            sub_437571()
    else
        int32_t var_14
        
        if (eax_1 == 6)
            int32_t var_10_4 = arg3
            var_14 = *(esi_1 + 0x18)
            esp_1 = &var_14
            sub_437571()
        else if (eax_1 == 8)
            int32_t var_10_3 = arg3
            var_14 = *(esi_1 + 0x10)
            esp_1 = &var_14
            sub_437571()
        else if (eax_1 == 9)
            if (arg3 == 0)
                *(esi_1 + 0x21) &= 0xfd
            else
                *(esi_1 + 0x21) |= 2
        else if (eax_1 == 0xb)
            int32_t var_10_2 = arg3
            var_14 = *(esi_1 + 0x20)
            esp_1 = &var_14
            sub_437571()
        else
            char const* const var_10_1 = "internal error: unknown node"
            var_14 = 0
            int32_t var_18_1 = 0
            sub_437200(arg1, nullptr, var_14, var_10_1)
            esp_1 = &var_c

*esp_1
esp_1[1]
esp_1[2]
return 0
