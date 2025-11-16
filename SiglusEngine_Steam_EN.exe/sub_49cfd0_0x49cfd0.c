// 函数: sub_49cfd0
// 地址: 0x49cfd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t eax = 0
int32_t* i = &data_8d02b4
int32_t var_8_1 = 0

do
    if (eax u<= 7 && *i != 0)
        int32_t j = 0
        void* esi_1 = &i[0x1b]
        
        do
            if (*esi_1 != 0)
                void* result = sub_4a8780(esi_1, 1)
                
                if (result != 0)
                    return result
            
            j += 1
            esi_1 += 0x2c
        while (j s< 0x100)
        
        eax = var_8_1
    
    eax += 1
    i = &i[0x1640]
    var_8_1 = eax
while (i s< &data_8fcab4)

return nullptr
