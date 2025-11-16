// 函数: sub_422820
// 地址: 0x422820
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
bool cond:0 = data_13125b4 != 0
data_131270c = 0xffffffff

if (cond:0)
    int32_t edx_1 = data_13701cc
    
    if (edx_1 != 0)
        int32_t ecx_1 = data_13701b0
        int32_t eax_1 = 0
        int32_t esi = data_13126e0
        int32_t var_8_1 = 0
        int32_t edi
        int32_t var_10 = edi
        void* edi_3
        
        if (esi s<= 0)
        label_4228c5:
            ecx_1 = mods.dp.d(sx.q(data_13126e0 + data_13701b0 - 1), 0x3e8)
            edi_3 = *(data_13701cc + (ecx_1 << 3) + 4)
        else
            while (true)
                edi_3 = *(edx_1 + (ecx_1 << 3) + 4)
                
                if (*(edi_3 + 0x50) s> 0)
                    int32_t eax_3
                    int32_t edx_2
                    edx_2:eax_3 = sx.q(data_13126dc)
                    
                    if (*(edi_3 + 0x20) - data_13126fc s>= (eax_3 - edx_2) s>> 1)
                        break
                    
                    eax_1 = var_8_1
                    edx_1 = data_13701cc
                    esi = data_13126e0
                
                ecx_1 += 1
                
                if (ecx_1 == 0x3e8)
                    ecx_1 = 0
                
                eax_1 += 1
                var_8_1 = eax_1
                
                if (eax_1 s>= esi)
                    goto label_4228c5
            
            if (var_8_1 == 0xffffffff)
                goto label_4228c5
        
        int32_t eax_11 = data_13126f0 - 2
        data_131270c = ecx_1
        data_1312710 = eax_11
        data_1312714 = *(edi_3 + 0x24) - data_13126fc - 2
        data_1312718 = data_13126f8 - 2
        data_131271c = *(edi_3 + 0x28) - data_13126fc + 2
        int32_t eax_19
        eax_19.b = 1
        return eax_19

int32_t eax
eax.b = 0
return eax
