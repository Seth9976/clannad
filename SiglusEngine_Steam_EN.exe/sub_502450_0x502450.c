// 函数: sub_502450
// 地址: 0x502450
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_1af4e84
int32_t ebx = 0xffffffff
int32_t var_8 = 0
enum MESSAGEBOX_RESULT eax = 0xffffffff
int32_t var_c = 0
int32_t esi = 0xffffffff
enum MESSAGEBOX_RESULT var_10 = 0xffffffff
int32_t edi = 0xffffffff

if (ecx u> 3)
    goto label_5024d8

char ecx_3

switch (ecx)
    case 0
        eax = sub_4ef190(0xffffffff, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        ecx_3 = 0
    case 1
        sub_4ef190(0xffffffff, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720)
        eax = data_1b8a75c
        ebx = data_1b8a748
        esi = data_1b8a770
        edi = data_1b8a784
        var_10 = eax
    label_5024d8:
        ecx_3 = 0
    label_5024da:
        
        if (arg4 != 0)
            if (esi s<= 0)
                esi = ebx - 1
            else
                esi = esi - 1 + ebx
            
            if (edi s<= 0)
                edi = eax - 1
            else
                edi = edi - 1 + eax
    case 2
        eax = sub_4ef190(0xffffffff, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720)
        var_c = data_1b8a748
        var_8 = data_1b8a75c
        ecx_3 = (data_1b8a770).b
    case 3
        sub_4ef190(0xffffffff, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", &data_1b8a720)
        eax = data_1b8a75c
        ebx = data_1b8a748
        esi = data_1b8a770
        edi = data_1b8a784
        var_c = data_1b8a798
        var_8 = data_1b8a7ac
        ecx_3 = (data_1b8a7c0).b
        var_10 = eax
        goto label_5024da

return sub_47e7f0(eax, arg3, data_1b8a720, data_1b8a734, ebx, var_10, esi, edi, var_c, var_8, ecx_3)
