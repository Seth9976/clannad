// 函数: sub_416c90
// 地址: 0x416c90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = data_131d2f4
int32_t ecx_1 = data_131310c - data_131d314
int32_t var_10 = ecx_1
int32_t var_14
int32_t eax

if (edx s< 0x3e8)
    eax = edx
    var_14 = 1
else
    eax = edx - 0x3e8
    var_14 = 0

if (arg1 == 0)
    int32_t edi_1 = 1
    int32_t var_8_1 = 1
    
    if (eax - 1 u> 7)
        data_131d2f4 = 0xffffffff
    else
        switch (eax)
            case 1
                void* ecx_2 = &data_131d36c
                int32_t i_5 = 0x10
                void* var_8_2 = &data_131d36c
                int32_t i_8 = 0x10
                int32_t i
                
                do
                    if (*(ecx_2 - 0x54) != 0xffffffff)
                        void* esi_1 = ecx_2 - 4
                        sub_4d20b0(esi_1)
                        ecx_2 = var_8_2
                        int32_t eax_4 = *ecx_2
                        bool cond:1_1 = eax_4 != *esi_1
                        *(ecx_2 + 0x84) = eax_4
                        i_5 = i_8
                        
                        if (cond:1_1)
                            edi_1 = 0
                    
                    ecx_2 += 0x3b4
                    i = i_5
                    i_5 -= 1
                    var_8_2 = ecx_2
                    i_8 = i_5
                while (i != 1)
                edx = data_131d2f4
            case 2, 3, 4, 5, 6, 7
                void* esi_2 = &data_131d374
                int32_t i_4 = 0x10
                int32_t i_1
                
                do
                    if (*(esi_2 - 0x5c) != 0xffffffff)
                        if (*(esi_2 + 0x6c) != 0)
                            sub_4d20b0(esi_2 - 0xc)
                            int32_t eax_9 = *(esi_2 - 8)
                            edi_1 = var_8_1
                            
                            if (eax_9 != *(esi_2 - 0xc))
                                edi_1 = 0
                            
                            *(esi_2 + 0x7c) = eax_9
                            var_8_1 = edi_1
                            *(esi_2 + 0x80) = sub_4d16f0(sub_4d20b0(esi_2 + 0x1c), *(esi_2 + 0x88), 
                                *(esi_2 + 0x20), *(esi_2 + 0x90))
                            *(esi_2 + 0x84) = sub_4d16f0(sub_4d20b0(esi_2 + 0x44), *(esi_2 + 0x8c), 
                                *(esi_2 + 0x48), *(esi_2 + 0x94))
                            edx = data_131d2f4
                        else
                            int32_t eax_5 = *(esi_2 + 0x70)
                            
                            if (eax_5 u<= ecx_1)
                                int32_t ecx_4 = *(esi_2 + 0x74)
                                int32_t edi_3 = ecx_1 - eax_5
                                int32_t eax_6 = *(esi_2 + 0x7c)
                                *esi_2 = eax_6
                                int32_t edx_2 = data_131310c
                                *(esi_2 - 8) = eax_6
                                *(esi_2 + 0x18) = 0
                                *(esi_2 + 0xc) = edx_2
                                
                                if (edx s< 0x3e8)
                                    *(esi_2 - 0xc) = 0xff
                                    
                                    if (ecx_4 s< 0)
                                        ecx_4 = neg.d(ecx_4)
                                    
                                    *(esi_2 + 4) = 0xff
                                else
                                    *(esi_2 - 0xc) = 0
                                    
                                    if (ecx_4 s< 0)
                                        ecx_4 = neg.d(ecx_4)
                                    
                                    *(esi_2 + 4) = 0
                                
                                *(esi_2 + 0x14) = ecx_4
                                int32_t ecx_5 = data_131310c
                                *(esi_2 + 0x10) = 0
                                *(esi_2 + 8) = 0
                                *(esi_2 - 4) = 0
                                int32_t eax_7 = *(esi_2 + 0x74)
                                *(esi_2 + 0x40) = 0
                                *(esi_2 + 0x20) = 0
                                *(esi_2 + 0x1c) = 0x59
                                *(esi_2 + 0x28) = 0
                                *(esi_2 + 0x34) = ecx_5
                                
                                if (eax_7 s< 0)
                                    eax_7 = neg.d(eax_7)
                                
                                *(esi_2 + 0x3c) = eax_7
                                *(esi_2 + 0x38) = 0
                                *(esi_2 + 0x2c) = 0x59
                                *(esi_2 + 0x30) = 0
                                *(esi_2 + 0x24) = 0
                                int32_t eax_8 = *(esi_2 + 0x74)
                                *(esi_2 + 0x68) = 0
                                *(esi_2 + 0x48) = 0
                                *(esi_2 + 0x44) = 0x59
                                *(esi_2 + 0x50) = 0
                                *(esi_2 + 0x5c) = ecx_5
                                
                                if (eax_8 s< 0)
                                    eax_8 = neg.d(eax_8)
                                
                                *(esi_2 + 0x4c) = 0
                                *(esi_2 + 0x58) = 0
                                *(esi_2 + 0x54) = 0x59
                                *(esi_2 + 0x60) = 0
                                *(esi_2 + 0x64) = eax_8
                                *(esi_2 + 0xc) -= edi_3
                                *(esi_2 + 0x34) -= edi_3
                                *(esi_2 + 0x5c) -= edi_3
                                *(esi_2 + 0x6c) = 1
                                edx = data_131d2f4
                            
                            edi_1 = 0
                            var_8_1 = 0
                    
                    ecx_1 = var_10
                    esi_2 += 0x3b4
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
            case 8
                void* ecx_12 = &data_131d3ec
                int32_t i_7 = 0x10
                int32_t i_2
                
                do
                    if (*(ecx_12 - 0xd4) != 0xffffffff && *(ecx_12 - 0xc) == 0)
                        if (*(ecx_12 - 8) u<= var_10)
                            *(ecx_12 - 0xc) = 1
                            int32_t eax_15
                            eax_15.b = edx s< 0x3e8
                            *ecx_12 = eax_15
                            edx = data_131d2f4
                        
                        edi_1 = 0
                    
                    ecx_12 += 0x3b4
                    i_2 = i_7
                    i_7 -= 1
                while (i_2 != 1)
        
        if (edi_1 != 0)
            data_131d2f4 = 0xffffffff
        else if (edx != 0xffffffff)
            return edi_1 + 1
else
    data_703008 = 1
    data_131d2f4 = 0xffffffff

void* eax_1 = &data_131d3f0
int32_t i_6 = 0x10
int32_t i_3

do
    if (*(eax_1 - 0xd8) != 0xffffffff)
        *(eax_1 - 4) = var_14
        *eax_1 = 0xff
        __builtin_memset(eax_1 + 4, 0, 0x18)
    
    eax_1 += 0x3b4
    i_3 = i_6
    i_6 -= 1
while (i_3 != 1)

if (data_131d2e8 != i_6)
    sub_415010(&data_131d2d0)
    data_107eff4 = 0
    data_107eff0 = 0xff
    data_107efa0 = 0xfffffffe
    data_107efa4 = 0xffffffff

return 0
