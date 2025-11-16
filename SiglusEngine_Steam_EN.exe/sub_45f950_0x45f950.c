// 函数: sub_45f950
// 地址: 0x45f950
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = 0
void* esi = &data_108ffe4
int32_t var_8 = 0

for (int32_t* i = &data_1321ed4; i s< 0x13262d4; )
    if (*esi != 0)
        char* eax = sub_45f7a0(edi, nullptr)
        
        if (eax == 1)
            uint32_t* var_20 = nullptr
            int32_t var_1c = 0
            sub_427370(eax, esi, &var_20, 0xffffffff, 0, eax, 0, nullptr, eax, 0)
            
            if (var_20 != 0)
                i[1] = *(esi + 0x24)
                uint32_t eax_2 = *(esi + 0x28)
                i[2] = eax_2
                i[-1] = 0
                *i = 0
                int32_t eax_3 = sub_45f070(eax_2, &i[-1], &var_20, i)
                int32_t var_30_2 = *i
                int32_t var_34_2 = i[-1]
                sub_45f2c0(eax_3, &i[-1], &var_20)
                sub_4d6c40(&var_20, &var_1c)
                edi = var_8
        else if (data_702fc0 == 0)
            void* var_30_3 = esi
            int32_t var_34_3 = edi
            sub_4c84d0(&data_7027c0, 0x619a50)
            
            if (data_702fc0 != 0 || data_641ad0 s< 6)
                MessageBoxA(data_7027bc, &data_7027c0, 0x616ce4, MB_OK)
                data_641ad0 += 1
    
    edi += 1
    i = &i[0x44]
    esi += 0x2c
    var_8 = edi
