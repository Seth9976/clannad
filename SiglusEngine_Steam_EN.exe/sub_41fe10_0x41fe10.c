// 函数: sub_41fe10
// 地址: 0x41fe10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
sub_4d6c40(&data_1370110, &data_1370110:4)
sub_4d6c40(&data_1370120, &data_1370124)
sub_4d6c40(&data_1370160, &data_1370160:4)
sub_4d6c40(&data_1370170, &data_1370174)

if (data_13701cc != 0)
    for (int32_t i = 0; i s< 0x3e8; i += 1)
        int32_t eax_1 = data_13701cc
        
        if (eax_1 != 0 && i u<= 0x3e7)
            void* ecx_3 = *(eax_1 + (i << 3) + 4)
            void* edi_1 = eax_1 + (i << 3)
            
            if (ecx_3 != 0)
                sub_41fee0(ecx_3)
                
                if (*(eax_1 + (i << 3)) != 0)
                    sub_4d6c40(eax_1 + (i << 3), edi_1 + 4)
                else if (*(edi_1 + 4) != 0)
                    *(edi_1 + 4) = 0

sub_4d6c40(&data_13701c8, &data_13701cc)
int32_t result = sub_4d6c40(&data_13701d0, &data_13701d4)
sub_41fcb0()
return result
