// 函数: sub_4dafd5
// 地址: 0x4dafd5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t ecx_1 = zx.d(*((arg5 << 1) + &data_b59e1c))
uint32_t ecx_3 = zx.d(*((arg6 << 1) + &data_b59e1c))
char* ebx
char* var_14 = ebx
uint32_t var_8 = *(arg2 + 0x24)
int32_t i = *(arg2 + 0x28)
int32_t edi
int32_t var_1c = edi
char* ecx_4

if (arg7 != 0 && *(arg2 + 0x48) != 0)
    ecx_4 = *(arg2 + 0x4c)
    arg7.d = *(arg2 + 0x50)
    goto label_4db2dc

char* esi_26

while (true)
    if (i u< arg5)
        int32_t edi_1 = *(arg2 + 0x14)
        
        do
            int32_t esi_2 = *(arg2 + 0x18)
            char ecx_6
            
            if (esi_2 u>= edi_1)
                if (esi_2 != edi_1)
                    *(arg2 + 4) = 1
                
                ecx_6 = 0
            else
                ecx_6 = (*(arg2 + 8))[esi_2]
                *(arg2 + 0x18) = esi_2 + 1
            
            uint32_t esi_5 = zx.d(ecx_6) << i.b
            i += 8
            var_8 |= esi_5
        while (i u< arg5)
    
    if (*(arg2 + 4) == 0)
        uint32_t ecx_8 = ecx_1
        int32_t esi_6 = arg3
        char* esi_7
        uint32_t edi_3
        
        while (true)
            esi_7 = esi_6 + ((ecx_8 & var_8) << 3)
            edi_3 = zx.d(*esi_7)
            
            if (edi_3 u<= 0x10)
                break
            
            if (edi_3 == 0x63)
                return 1
            
            var_8 u>>= esi_7[1]
            
            for (i -= zx.d(esi_7[1]); i u< edi_3 - 0x10; i += 8)
                int32_t ecx_11 = *(arg2 + 0x18)
                int32_t ebx_1 = *(arg2 + 0x14)
                char ebx_3
                
                if (ecx_11 u>= ebx_1)
                    if (ecx_11 != ebx_1)
                        *(arg2 + 4) = 1
                    
                    ebx_3 = 0
                else
                    ebx_3 = (*(arg2 + 8))[ecx_11]
                    *(arg2 + 0x18) = ecx_11 + 1
                
                var_8 |= zx.d(ebx_3) << i.b
            
            if (*(arg2 + 4) != 0)
                return 1
            
            ecx_8 = zx.d(*(((edi_3 - 0x10) << 1) + &data_b59e1c))
            esi_6 = *(esi_7 + 4)
        
        var_8 u>>= esi_7[1]
        i -= zx.d(esi_7[1])
        
        if (edi_3 == 0x10)
            ebx.b = esi_7[4]
            **(arg2 + 0xc) = ebx.b
            *(arg2 + 0xc) += 1
            int32_t temp2_1 = *(arg2 + 0x1c)
            *(arg2 + 0x1c) -= 1
            
            if (temp2_1 != 1)
                continue
            else
                *(arg2 + 0x48) = 0
                *(arg2 + 0x38) = arg3
                *(arg2 + 0x3c) = arg4
                *(arg2 + 0x40) = arg5
                *(arg2 + 0x44) = arg6
            label_4db313:
                *(arg2 + 0x2c) = 2
            
            goto label_4db31d
        
        if (edi_3 == 0xf)
        label_4db31d:
            *(arg2 + 0x28) = i
            *(arg2 + 0x24) = var_8
            return 0
        
        for (; i u< edi_3; i += 8)
            int32_t ecx_22 = *(arg2 + 0x18)
            int32_t ebx_5 = *(arg2 + 0x14)
            char ebx_7
            
            if (ecx_22 u>= ebx_5)
                if (ecx_22 != ebx_5)
                    *(arg2 + 4) = 1
                
                ebx_7 = 0
            else
                ebx_7 = (*(arg2 + 8))[ecx_22]
                *(arg2 + 0x18) = ecx_22 + 1
            
            var_8 |= zx.d(ebx_7) << i.b
        
        if (*(arg2 + 4) == 0)
            arg7.d = (zx.d(*((edi_3 << 1) + &data_b59e1c)) & var_8) + zx.d(*(esi_7 + 4))
            uint32_t var_8_1 = var_8 u>> edi_3.b
            int32_t i_1 = i - edi_3
            
            if (i_1 u< arg6)
                int32_t edi_4 = *(arg2 + 0x14)
                
                do
                    int32_t esi_9 = *(arg2 + 0x18)
                    char ecx_30
                    
                    if (esi_9 u>= edi_4)
                        if (esi_9 != edi_4)
                            *(arg2 + 4) = 1
                        
                        ecx_30 = 0
                    else
                        ecx_30 = (*(arg2 + 8))[esi_9]
                        *(arg2 + 0x18) = esi_9 + 1
                    
                    uint32_t esi_12 = zx.d(ecx_30) << i_1.b
                    i_1 += 8
                    var_8_1 |= esi_12
                while (i_1 u< arg6)
            
            if (*(arg2 + 4) == 0)
                uint32_t ecx_32 = ecx_3
                int32_t esi_13 = arg4
                uint32_t edi_6
                
                while (true)
                    ebx = esi_13 + ((ecx_32 & var_8_1) << 3)
                    edi_6 = zx.d(*ebx)
                    
                    if (edi_6 u<= 0x10)
                        break
                    
                    if (edi_6 == 0x63)
                        return 1
                    
                    var_8_1 u>>= ebx[1]
                    
                    for (i_1 -= zx.d(ebx[1]); i_1 u< edi_6 - 0x10; i_1 += 8)
                        int32_t esi_14 = *(arg2 + 0x18)
                        int32_t ecx_35 = *(arg2 + 0x14)
                        char ecx_37
                        
                        if (esi_14 u>= ecx_35)
                            if (esi_14 != ecx_35)
                                *(arg2 + 4) = 1
                            
                            ecx_37 = 0
                        else
                            ecx_37 = (*(arg2 + 8))[esi_14]
                            *(arg2 + 0x18) = esi_14 + 1
                        
                        var_8_1 |= zx.d(ecx_37) << i_1.b
                    
                    if (*(arg2 + 4) != 0)
                        return 1
                    
                    ecx_32 = zx.d(*(((edi_6 - 0x10) << 1) + &data_b59e1c))
                    esi_13 = *(ebx + 4)
                
                uint32_t var_8_2 = var_8_1 u>> ebx[1]
                int32_t i_2
                
                for (i_2 = i_1 - zx.d(ebx[1]); i_2 u< edi_6; i_2 += 8)
                    int32_t esi_18 = *(arg2 + 0x18)
                    int32_t ecx_42 = *(arg2 + 0x14)
                    char ecx_44
                    
                    if (esi_18 u>= ecx_42)
                        if (esi_18 != ecx_42)
                            *(arg2 + 4) = 1
                        
                        ecx_44 = 0
                    else
                        ecx_44 = (*(arg2 + 8))[esi_18]
                        *(arg2 + 0x18) = esi_18 + 1
                    
                    var_8_2 |= zx.d(ecx_44) << i_2.b
                
                if (*(arg2 + 4) == 0)
                    uint32_t esi_24 =
                        (zx.d(*((edi_6 << 1) + &data_b59e1c)) & var_8_2) + zx.d(*(ebx + 4))
                    var_8 = var_8_2 u>> edi_6.b
                    int32_t ecx_48 = *(arg2 + 0xc)
                    i = i_2 - edi_6
                    ecx_4 = ecx_48 - esi_24
                    
                    if (esi_24 u> ecx_48 - *(arg2 + 0x10))
                        ecx_4 = &ecx_4[0x8000]
                    
                label_4db2dc:
                    
                    if (arg7.d == 0)
                        continue
                    
                    ebx.b = *ecx_4
                    arg7.d -= 1
                    **(arg2 + 0xc) = ebx.b
                    *(arg2 + 0xc) += 1
                    esi_26 = *(arg2 + 0x10)
                    ecx_4 = &ecx_4[1]
                    break
    
    return 1

if (ecx_4 == &esi_26[0x8000])
    ecx_4 = esi_26

int32_t temp1_1 = *(arg2 + 0x1c)
*(arg2 + 0x1c) -= 1

if (temp1_1 != 1)
    goto label_4db2dc

*(arg2 + 0x38) = arg3
*(arg2 + 0x3c) = arg4
*(arg2 + 0x40) = arg5
*(arg2 + 0x4c) = ecx_4
*(arg2 + 0x48) = 1
*(arg2 + 0x44) = arg6
*(arg2 + 0x50) = arg7.d
goto label_4db313
