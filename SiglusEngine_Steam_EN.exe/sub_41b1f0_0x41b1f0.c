// 函数: sub_41b1f0
// 地址: 0x41b1f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = &data_98be0c
int32_t i_2 = 8
char* eax_1
int32_t i

do
    eax_1 = sub_4d6c40(esi, &esi[1])
    esi = &esi[8]
    i = i_2
    i_2 -= 1
while (i != 1)
sub_41aee0()
void* i_4 = i_2
void* esi_1 = &data_12dc39c
int32_t i_3 = i_2

for (int32_t* i_1 = &data_98be0c; i_1 s< 0x98bf0c; )
    if (*esi_1 != 0)
        int32_t ebx_1 = data_703180:4
        char* ecx_3
        eax_1, ecx_3 = sub_4c3da0(eax_1, 5, esi_1, 0x18)
        
        if (eax_1 == 1)
        label_41b2be:
            char* var_20_2 = ecx_3
            int32_t var_24_1 = 0x18
            eax_1 = sub_4c5340(&i_3, esi_1, data_703180:4, &i_3, &i_4, ecx_3)
            
            if (i_3 != 0)
                sub_41b320(eax_1, eax_1, i_4, i_1, &i_1[1])
                eax_1 = sub_4d6c40(&i_3, &i_4)
        else
            if (ebx_1 != 0xffffffff)
                eax_1, ecx_3 = sub_4c51f0(eax_1, esi_1, ebx_1, nullptr)
            
            if (ebx_1 != 0xffffffff && eax_1 != 0)
                goto label_41b2be
            
            if (data_702fc0 == 0)
                void* var_20_1 = esi_1
                eax_1 = sub_4c84d0(&data_7027c0, 0x613970)
                
                if (data_702fc0 != 0 || data_641ad0 s< 6)
                    eax_1 = MessageBoxA(data_7027bc, &data_7027c0, 0x616ce4, MB_OK)
                    data_641ad0 += 1
    
    i_1 = &i_1[8]
    esi_1 += 0x24

return sub_41b4a0()
