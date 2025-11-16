// 函数: sub_623b10
// 地址: 0x623b10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = sub_5cb350(arg1 + 0x62538)

if (eax != 2 && eax != 3 && *(data_bac4a0 + 0xcc) == 0 && *(data_bac484 + 0x138) == 0)
    void* edx_1 = data_bac498
    
    if (*(edx_1 + 2) == 0)
        if (sub_6600a0().b != 0 && sub_635940().b != 0)
            sub_65ffe0(0)
            *(data_bac498 + 2) = 1
    else
        void* ecx_1 = data_bac4c8
        void* ecx_2
        
        if (*(ecx_1 + 0x14) != 2)
            if (*(ecx_1 + 0x51c) == 2)
                ecx_2 = ecx_1 + 0x510
                goto label_623b91
            
            if (*(ecx_1 + 0x1c8c) == 2)
                ecx_2 = ecx_1 + 0x1c80
                goto label_623b91
        else
            ecx_2 = ecx_1 + 8
        label_623b91:
            
            if (sub_6b1fd0(ecx_2) != 0)
                goto label_623bbc
        char eax_2 = sub_635970()
        
        if (eax_2 == 0)
            eax = sub_635970()
        
        if (eax_2 != 0 || eax.b != 0)
            edx_1 = data_bac498
        label_623bbc:
            *(edx_1 + 2) = 0
            *(arg1 + 0x4a6c0) = *(arg1 + 0x4b030)
            int32_t eax_3
            eax_3.b = 1
            return eax_3

eax.b = 1
return eax
