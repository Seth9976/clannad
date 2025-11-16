// 函数: sub_41a110
// 地址: 0x41a110
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0
void* edi = &data_109a190

for (void* i = &data_1319258; i s< 0x1319758; )
    bool cond:0_1 = *(edi - 0x2c) == 0
    *(i - 0x18) = 0
    *(i - 0x14) = 0
    
    if (not(cond:0_1))
        int32_t eax = sub_419fb0(ebx, nullptr)
        
        if (eax == 1)
            sub_427370(eax, edi - 0x2c, i - 0x18, 0xffffffff, 0, eax, 0, nullptr, eax, 0)
            
            if (*(i - 0x18) != 0)
                *i = *(edi - 8)
                *(i + 4) = *edi
                *(i + 8) = *(edi + 4)
                *(i + 0xc) = *(edi - 4)
                sub_419ef0(i - 0x18)
        else if (data_702fc0 == 0)
            void* var_10_1 = edi - 0x2c
            int32_t var_14_2 = ebx
            sub_4c84d0(&data_7027c0, 0x6136c0)
            
            if (data_702fc0 != 0 || data_641ad0 s< 6)
                MessageBoxA(data_7027bc, &data_7027c0, 0x616ce4, MB_OK)
                data_641ad0 += 1
    
    i += 0x28
    ebx += 1
    edi += 0x34
