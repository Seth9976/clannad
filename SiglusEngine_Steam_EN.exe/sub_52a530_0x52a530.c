// 函数: sub_52a530
// 地址: 0x52a530
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_1b8c884
int32_t var_8 = ecx

if (ecx s> 0x38)
    ecx = 0x38
    var_8 = 0x38
label_52a557:
    int32_t edi_1 = 0
    int32_t esi_1 = 0
    
    if (ecx s> 0)
        int32_t eax = var_8
        void* ecx_1 = &data_20c0720
        void* var_c_1 = &data_20c0720
        int32_t ebx_1 = 0
        
        do
            if (*((esi_1 << 2) + &data_20c0560) != 0)
                if (edi_1 s< 0x10)
                    sub_4a4620(eax, ecx_1, edi_1, 0xa)
                    ecx_1 = var_c_1
                    edi_1 += 1
                    eax = var_8
            else if (ebx_1 s< 0x28)
                *((ebx_1 << 2) + &data_715e9c) = *((esi_1 << 2) + &data_20c0640)
                ebx_1 += 1
                eax = var_8
            
            esi_1 += 1
            ecx_1 += 0x40
            var_c_1 = ecx_1
        while (esi_1 s< eax)
else if (ecx s> 0)
    goto label_52a557
