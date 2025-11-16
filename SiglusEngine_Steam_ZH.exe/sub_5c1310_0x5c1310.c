// 函数: sub_5c1310
// 地址: 0x5c1310
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x140) == 0 || *(arg1 + 0x143) == 0)
    return 

int32_t eax

if (*(data_bac4a0 + 0xcc) != 0)
    eax.b = 0
else if (*(data_bac484 + 0x138) == 0)
    eax.b = *(data_bac498 + 2) == 0
else
    eax.b = 0

void* ecx = data_bac4c8
void* ecx_1

if (*(ecx + 0x64) == 2)
    if (eax.b == 0)
        goto label_5c1374
    
    if (sub_634fe0().b == 0)
        ecx = data_bac4c8
    label_5c1374:
        ecx_1 = ecx + 0x58
    label_5c1377:
        
        if (sub_6b1fd0(ecx_1).b != 0)
            return sub_5c1490(arg1) __tailcall
else if (*(ecx + 0x97c) != 2)
    if (*(ecx + 0x1d2c) == 2 && (eax.b == 0 || *(data_bac458 + 0x3e8) == 0)
            && sub_6b1fd0(ecx + 0x1d20).b != 0)
        return sub_5c1490(arg1) __tailcall
else if (eax.b == 0 || *(data_bac458 + 0x3a9) == 0)
    ecx_1 = ecx + 0x970
    goto label_5c1377
