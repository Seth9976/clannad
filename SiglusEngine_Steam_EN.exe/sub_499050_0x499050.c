// 函数: sub_499050
// 地址: 0x499050
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
data_1bfdd48 = 0
data_1bfdd4c = 0
data_1bfdd50 = 0
int32_t eax
sub_4d6960(eax, &data_1bfdd4c, &data_1bfdd48, 0x13000, "NAMAE_CONTROL")

for (void* i = nullptr; i s< 0x2710; i += 1)
    sub_498ea0(i)

char* ecx_2 = data_1bfdd4c
void* result = &data_12c92b4
int32_t i_4 = 0x200
int32_t i_1

do
    *result = 0
    result += 0x98
    *ecx_2 = 0
    ecx_2 = &ecx_2[0x98]
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)
int32_t i_2 = 0
int32_t i_3 = 0

if (data_12dc2b4 s> 0)
    result = data_1bfdd50
    void* ebx_1 = &data_12c92f8
    
    do
        void* esi = data_1bfdd4c
        int32_t edi_1 = 0
        
        if (result s> 0)
            do
                int32_t ecx_3 = *ebx_1
                
                if (ecx_3 == *(esi + 0x44))
                    bool cond:0_1 = sub_4d1be0(result, esi + 1, ebx_1 - 0x43, ecx_3) == 0
                    result = data_1bfdd50
                    
                    if (cond:0_1)
                        break
                
                edi_1 += 1
                esi += 0x98
            while (edi_1 s< result)
            
            i_2 = i_3
        
        if (edi_1 != result)
            *(ebx_1 - 0x44) = 1
            *esi = 1
        
        i_2 += 1
        ebx_1 += 0x98
        i_3 = i_2
    while (i_2 s< data_12dc2b4)

return result
