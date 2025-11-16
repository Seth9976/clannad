// 函数: sub_495290
// 地址: 0x495290
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1be4b04 == 0)
    return 

data_1be4af0 += 1
uint32_t eax = timeGetTime()

if (data_1be4afc == 0)
label_4952d7:
    int32_t esi = data_1be4af4 * 0x2739a8
    data_1be4aec = eax
    data_1be4af0 = 0
    int32_t* esi_1 = esi + data_1be4b04
    *esi_1 = 0
    sub_4d1c30(GetLocalTime(&esi_1[1]), arg1, &esi_1[6], 0x273990)
    int32_t ecx_3 = data_1be4b00
    int32_t eax_4 = data_1be4af4 + 1
    
    if (eax_4 s>= ecx_3)
        eax_4 = 0
    
    data_1be4af4 = eax_4
    int32_t eax_5 = data_1be4afc
    
    if (eax_5 s< ecx_3)
        data_1be4afc = eax_5 + 1
        return sub_56fee0(1) __tailcall
    
    int32_t eax_9 = data_1be4af8 + 1
    data_1be4ae8 = 1
    
    if (eax_9 s>= ecx_3)
        eax_9 = 0
    
    data_1be4af8 = eax_9
    return sub_56fee0(1) __tailcall

if (data_1be4af0 s>= 0 && eax - data_1be4aec u>= 0xbb8)
    goto label_4952d7
