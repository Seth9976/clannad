// 函数: sub_4f3820
// 地址: 0x4f3820
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_2ec
int32_t eax
sub_4d1ba0(eax, 0x2d4, &var_2ec, 0)
int32_t eax_1 = data_1bfdd30
int32_t var_cc = 0xffffffff
int32_t var_8c = 0xff

if (eax_1 != 0x194 && eax_1 != 0x57c)
    data_1b8b06c = 1
    return eax_1

int32_t eax_2 = data_1af4e84
int32_t var_1c8
int32_t var_1c4
int32_t var_1c0
int32_t var_1bc
int32_t var_f0
int32_t var_ec
int32_t var_e8
int32_t var_10
int32_t var_c
int32_t var_8_1
int32_t eax_4
int32_t ecx_3
int32_t edx_2
int32_t ebx
int32_t esi_1
int32_t edi

if (eax_2 u> 3)
    ebx = var_f0
    edx_2 = var_1bc
    ecx_3 = var_1c0
    edi = var_1c4
    esi_1 = var_1c8
    var_c = var_e8
    var_10 = var_ec
    int32_t var_8
    eax_4 = var_8
    var_8_1 = eax_4
else
    switch (eax_2)
        case 0
            sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
            edi = 0
            esi_1 = 0
            var_1c8 = 0
            var_1c4 = 0
            int32_t ecx_2
            int32_t edx_1
            
            if (data_976b50 == 0)
                ecx_2 = data_70300c
                edx_1 = data_7030dc
            else
                ecx_2 = data_976b58
                edx_1 = data_976b5c
            
            int32_t eax_3 = data_1b8a734
            ecx_3 = ecx_2 - 1
            ebx = data_1b8a720
            edx_2 = edx_1 - 1
            var_10 = eax_3
            var_ec = eax_3
            eax_4 = data_1b8a748
            var_1bc = edx_2
            var_1c0 = ecx_3
            var_f0 = ebx
            var_c = eax_4
            var_e8 = eax_4
            var_8_1 = 0x64
        case 1
            sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
            edi = 0
            esi_1 = 0
            var_1c8 = 0
            var_1c4 = 0
            int32_t ecx_5
            int32_t edx_4
            
            if (data_976b50 == 0)
                ecx_5 = data_70300c
                edx_4 = data_7030dc
            else
                ecx_5 = data_976b58
                edx_4 = data_976b5c
            
            int32_t eax_5 = data_1b8a734
            ecx_3 = ecx_5 - 1
            ebx = data_1b8a720
            edx_2 = edx_4 - 1
            var_10 = eax_5
            var_ec = eax_5
            int32_t eax_6 = data_1b8a748
            var_c = eax_6
            var_e8 = eax_6
            eax_4 = data_1b8a75c
            var_1bc = edx_2
            var_1c0 = ecx_3
            var_f0 = ebx
            var_8_1 = eax_4
        case 2
            sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", &data_1b8a720)
            int32_t eax_7 = data_1b8a784
            var_10 = eax_7
            var_ec = eax_7
            eax_4 = data_1b8a798
            var_c = eax_4
            var_e8 = eax_4
            var_8_1 = 0x64
        label_4f3a26:
            ebx = data_1b8a770
            edx_2 = data_1b8a75c
            ecx_3 = data_1b8a748
            edi = data_1b8a734
            esi_1 = data_1b8a720
            var_f0 = ebx
            var_1bc = edx_2
            var_1c0 = ecx_3
            var_1c4 = edi
            var_1c8 = esi_1
            
            if (data_1bfdd30 s>= 0x3e8)
                if (ecx_3 == 0)
                    ecx_3 = esi_1
                else
                    ecx_3 = ecx_3 - 1 + esi_1
                
                var_1c0 = ecx_3
                
                if (edx_2 == 0)
                    edx_2 = edi
                    var_1bc = edx_2
                else
                    edx_2 = edx_2 - 1 + edi
                    var_1bc = edx_2
        case 3
            sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", &data_1b8a720)
            int32_t eax_8 = data_1b8a784
            var_10 = eax_8
            var_ec = eax_8
            int32_t eax_9 = data_1b8a798
            var_c = eax_9
            var_e8 = eax_9
            eax_4 = data_1b8a7ac
            var_8_1 = eax_4
            goto label_4f3a26

if (esi_1 s> ecx_3)
    eax_4 = esi_1
    esi_1 = ecx_3
    ecx_3 = eax_4
    var_1c8 = esi_1
    var_1c0 = ecx_3

if (edi s> edx_2)
    eax_4 = edi
    edi = edx_2
    edx_2 = eax_4
    var_1c4 = edi
    var_1bc = edx_2

if (data_1b8b06c == 0)
    data_1b8a638 = var_10
    data_1b8a63c = var_c
    int32_t eax_14 = var_8_1
    data_1b8a634 = ebx
    data_1b8a62c = ecx_3
    
    if (eax_14 s< 0)
        eax_14 = 0
    
    data_1b8a630 = edx_2
    data_1b8a648 = eax_14
    int32_t eax_15 = data_131310c
    data_1b8a624 = esi_1
    data_1b8a628 = edi
    data_1b8a640 = 0
    data_1b8a644 = 0x10
    data_1b8a64c = eax_15
    eax_4 = sub_413750(sub_411a20(eax_15, nullptr, 0x10, esi_1, edi, ecx_3, edx_2), var_1c4, 
        var_1c8, var_1c0, var_1bc, 0, 0xffffffff, 0, 0, 0, 0, 1, var_f0.b, var_ec, var_e8, 0xff, 0)
    data_71929c = 0x30
    data_7192a0 = 0
    data_7192e0 = 0

return eax_4
