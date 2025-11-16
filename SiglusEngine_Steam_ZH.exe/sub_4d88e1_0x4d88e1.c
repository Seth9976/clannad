// 函数: sub_4d88e1
// 地址: 0x4d88e1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* var_c = arg1
int32_t edi
int32_t var_18 = edi
int32_t esi_1 = *arg1[0x40] & 0xfffff
int32_t var_8_1 = 0

if (esi_1 u> 0)
    int32_t var_c_1 = esi_1 << 2
    
    do
        void* eax_3 = arg1[0x40]
        void* ecx = *(eax_3 + 8)
        int32_t edx_2 = var_8_1 << 2
        int32_t result = sub_4d75f7(arg1, 0x20, *(eax_3 + 0x10) + edx_2, 1, ecx + edx_2, 
            var_c_1 + ecx, nullptr, esi_1, 0, 0, 0, 0)
        
        if (result s< 0)
            return result
        
        var_8_1 += 1
        var_c_1 += 4
    while (var_8_1 u< esi_1)

return 0
