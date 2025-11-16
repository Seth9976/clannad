// 函数: sub_4f3150
// 地址: 0x4f3150
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_2e4
int32_t eax
sub_4d1ba0(eax, 0x2d4, &var_2e4, 0)
int32_t eax_1 = data_1bfdd30
int32_t var_c4 = 0xffffffff
int32_t var_84 = 0xff

if (eax_1 != 0x193 && eax_1 != 0x57b)
    data_1b8b06c = 1
    return eax_1

int32_t eax_2 = data_1af4e84
uint32_t var_e8
int32_t var_e4
int32_t var_e0
LRESULT var_8_1
LRESULT eax_4
void* ecx_3
LRESULT edx_2
int32_t esi_5
LRESULT edi
int32_t var_1c0

if (eax_2 u> 7)
    LRESULT var_1b4
    edx_2 = var_1b4
    void* var_1b8
    ecx_3 = var_1b8
    LRESULT var_1bc
    edi = var_1bc
    LRESULT var_8
    eax_4 = var_8
    var_8_1 = eax_4
    esi_5 = var_1c0
else
    switch (eax_2)
        case 0
            sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            edi = 0
            var_1c0 = 0
            int32_t var_1bc_1 = 0
            int32_t ecx_2
            int32_t edx_1
            
            if (data_976b50 == 0)
                ecx_2 = data_70300c
                edx_1 = data_7030dc
            else
                ecx_2 = data_976b58
                edx_1 = data_976b5c
            
            int32_t eax_3 = data_1b8a720
            ecx_3 = ecx_2 - 1
            edx_2 = edx_1 - 1
            void* var_1b8_1 = ecx_3
            LRESULT var_1b4_1 = edx_2
            
            if (eax_3 s< 0)
                eax_3 = 0
            else if (eax_3 s>= 0x100)
                eax_3 = 0xff
            
            var_e8 = zx.d((&data_12a2990)[eax_3 * 2].b)
            int32_t esi_2 = zx.d((&data_12a2990)[eax_3 * 2]:1.b)
            data_1b8a720 = eax_3
            eax_4 = zx.d((&data_12a2992)[eax_3 << 2])
            var_e4 = esi_2
            var_e0 = eax_4
            var_8_1 = 0
            esi_5 = var_1c0
        case 1
            sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            edi = 0
            var_1c0 = 0
            int32_t var_1bc_2 = 0
            int32_t ecx_5
            int32_t edx_4
            
            if (data_976b50 == 0)
                ecx_5 = data_70300c
                edx_4 = data_7030dc
            else
                ecx_5 = data_976b58
                edx_4 = data_976b5c
            
            int32_t eax_5 = data_1b8a720
            ecx_3 = ecx_5 - 1
            edx_2 = edx_4 - 1
            void* var_1b8_2 = ecx_3
            LRESULT var_1b4_2 = edx_2
            
            if (eax_5 s< 0)
                eax_5 = 0
            else if (eax_5 s>= 0x100)
                eax_5 = 0xff
            
            uint32_t esi_3 = zx.d((&data_12a2990)[eax_5 * 2].b)
            data_1b8a720 = eax_5
            var_e8 = esi_3
            var_e0 = zx.d((&data_12a2992)[eax_5 << 2])
            eax_4 = data_1b8a734
            var_e4 = zx.d((&data_12a2990)[eax_5 * 2]:1.b)
            var_8_1 = eax_4
            esi_5 = var_1c0
        case 2
            sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
            edi = 0
            esi_5 = 0
            int32_t var_1c0_1 = 0
            int32_t var_1bc_3 = 0
            int32_t ecx_7
            int32_t edx_6
            
            if (data_976b50 == 0)
                ecx_7 = data_70300c
                edx_6 = data_7030dc
            else
                ecx_7 = data_976b58
                edx_6 = data_976b5c
            
            ecx_3 = ecx_7 - 1
            var_e8 = data_1b8a720
            edx_2 = edx_6 - 1
            var_e4 = data_1b8a734
            eax_4 = data_1b8a748
            LRESULT var_1b4_3 = edx_2
            void* var_1b8_3 = ecx_3
            var_e0 = eax_4
            var_8_1 = 0
        case 3
            sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
            edi = 0
            esi_5 = 0
            int32_t var_1c0_2 = 0
            int32_t var_1bc_4 = 0
            int32_t ecx_9
            int32_t edx_8
            
            if (data_976b50 == 0)
                ecx_9 = data_70300c
                edx_8 = data_7030dc
            else
                ecx_9 = data_976b58
                edx_8 = data_976b5c
            
            ecx_3 = ecx_9 - 1
            var_e8 = data_1b8a720
            edx_2 = edx_8 - 1
            var_e4 = data_1b8a734
            var_e0 = data_1b8a748
            eax_4 = data_1b8a75c
            LRESULT var_1b4_4 = edx_2
            void* var_1b8_4 = ecx_3
            var_8_1 = eax_4
        case 4
            sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720)
            int32_t eax_12 = data_1b8a770
            esi_5 = data_1b8a720
            LRESULT edi_1 = data_1b8a734
            ecx_3 = data_1b8a748
            edx_2 = data_1b8a75c
            int32_t var_1c0_3 = esi_5
            void* var_1b8_5 = ecx_3
            LRESULT var_1b4_5 = edx_2
            
            if (eax_12 s< 0)
                eax_12 = 0
            else if (eax_12 s>= 0x100)
                eax_12 = 0xff
            
            var_e8 = zx.d((&data_12a2990)[eax_12 * 2].b)
            uint32_t edi_3 = zx.d((&data_12a2990)[eax_12 * 2]:1.b)
            data_1b8a770 = eax_12
            eax_4 = zx.d((&data_12a2992)[eax_12 << 2])
            var_e4 = edi_3
            edi = edi_1
            var_e0 = eax_4
            var_8_1 = 0
            goto label_4f3652
        case 5
            sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720)
            int32_t eax_13 = data_1b8a770
            esi_5 = data_1b8a720
            LRESULT edi_4 = data_1b8a734
            ecx_3 = data_1b8a748
            edx_2 = data_1b8a75c
            int32_t var_1c0_4 = esi_5
            void* var_1b8_6 = ecx_3
            LRESULT var_1b4_7 = edx_2
            
            if (eax_13 s< 0)
                eax_13 = 0
            else if (eax_13 s>= 0x100)
                eax_13 = 0xff
            
            var_e8 = zx.d((&data_12a2990)[eax_13 * 2].b)
            uint32_t edi_6 = zx.d((&data_12a2990)[eax_13 * 2]:1.b)
            data_1b8a770 = eax_13
            var_e4 = edi_6
            edi = edi_4
            var_e0 = zx.d((&data_12a2992)[eax_13 << 2])
            eax_4 = data_1b8a784
            goto label_4f364f
        case 6
            sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", &data_1b8a720)
            esi_5 = data_1b8a720
            edi = data_1b8a734
            ecx_3 = data_1b8a748
            edx_2 = data_1b8a75c
            var_e8 = data_1b8a770
            var_e4 = data_1b8a784
            eax_4 = data_1b8a798
            int32_t var_1c0_5 = esi_5
            LRESULT var_1bc_7 = edi
            void* var_1b8_7 = ecx_3
            LRESULT var_1b4_8 = edx_2
            var_e0 = eax_4
            var_8_1 = 0
        label_4f3652:
            
            if (data_1bfdd30 s>= 0x3e8)
                if (ecx_3 == 0)
                    ecx_3 = esi_5
                else
                    ecx_3 = ecx_3 - 1 + esi_5
                
                void* var_1b8_9 = ecx_3
                
                if (edx_2 == 0)
                    edx_2 = edi
                    LRESULT var_1b4_6 = edx_2
                else
                    edx_2 = edx_2 - 1 + edi
                    LRESULT var_1b4_10 = edx_2
        case 7
            sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", &data_1b8a720)
            esi_5 = data_1b8a720
            edi = data_1b8a734
            ecx_3 = data_1b8a748
            edx_2 = data_1b8a75c
            var_e8 = data_1b8a770
            var_e4 = data_1b8a784
            var_e0 = data_1b8a798
            eax_4 = data_1b8a7ac
            int32_t var_1c0_6 = esi_5
            LRESULT var_1bc_8 = edi
            void* var_1b8_8 = ecx_3
            LRESULT var_1b4_9 = edx_2
        label_4f364f:
            var_8_1 = eax_4
            goto label_4f3652

if (esi_5 s> ecx_3)
    eax_4 = esi_5
    esi_5 = ecx_3
    ecx_3 = eax_4
    int32_t var_1c0_7 = esi_5
    void* var_1b8_10 = ecx_3

if (edi s> edx_2)
    eax_4 = edi
    edi = edx_2
    edx_2 = eax_4
    LRESULT var_1bc_9 = edi
    LRESULT var_1b4_11 = edx_2

if (data_1b8b06c != 0)
    return eax_4

if (var_8_1 s<= 0)
    sub_413750(var_e4, edi, esi_5, ecx_3, edx_2, 0, 0xffffffff, 0, 0, 0, 0, 1, var_e8.b, var_e4, 
        var_e0, 0xff, 0)
else
    data_1b8a664.d = var_e8
    data_1b8a668.d = var_e4
    data_1b8a660 = edx_2
    data_1b8a66c.d = var_e0
    data_1b8a65c = ecx_3
    data_1b8a678 = var_8_1
    int32_t eax_24 = data_131310c
    data_1b8a654 = esi_5
    data_1b8a658 = edi
    data_1b8a670 = 0
    data_1b8a674 = 0x10
    data_1b8a67c = eax_24
    sub_411a20(eax_24, nullptr, 0x10, esi_5, edi, ecx_3, edx_2)
    data_71929c = 0x2f
    data_7192a0 = 0
    data_7192e0 = 0

var_2e4 = data_1bfdd30
int32_t var_1c4_1 = 0
int32_t var_84_1 = 0xff
int32_t var_c4_1 = 0xffffffff
int32_t var_c0_1 = 0
int32_t var_74_1 = 1
return sub_42a6d0(&var_2e4)
