// 函数: sub_6c0250
// 地址: 0x6c0250
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1

if (*(arg1 + 0x59) != 0)
    int32_t* ecx = data_4ebe45c
    int32_t* ebx_1 = data_4ebe460
    int32_t* esi_1 = ecx
    int32_t* edi_1 = ebx_1
    
    if (esi_1 != ebx_1)
        int32_t eax_1 = *(arg1 + 4)
        
        do
            if (*esi_1 == eax_1)
                if (esi_1 != ebx_1)
                    int32_t* eax_2 = sub_6c2a80(eax_1, ebx_1, esi_1, arg1 + 4)
                    ebx_1 = data_4ebe460
                    ecx = data_4ebe45c
                    esi_1 = eax_2
                
                break
            
            esi_1 = &esi_1[1]
        while (esi_1 != ebx_1)
    
    if (esi_1 == ecx && edi_1 == ebx_1)
        data_4ebe460 = ecx
    else if (esi_1 != edi_1)
        void* ebx_3 = (ebx_1 - edi_1) & 0xfffffffc
        _memcpy(esi_1, edi_1, ebx_3)
        data_4ebe460 = ebx_3 + esi_1

int32_t* ecx_2 = data_4ebe428
int32_t* ebx_4 = data_4ebe42c
int32_t* esi_2 = ecx_2
int32_t* edi_2 = ebx_4

if (esi_2 != ebx_4)
    int32_t eax_4 = *(arg1 + 4)
    
    do
        if (*esi_2 == eax_4)
            if (esi_2 != ebx_4)
                int32_t* eax_5 = sub_6c2a80(eax_4, ebx_4, esi_2, arg1 + 4)
                ebx_4 = data_4ebe42c
                ecx_2 = data_4ebe428
                esi_2 = eax_5
            
            break
        
        esi_2 = &esi_2[1]
    while (esi_2 != ebx_4)

if (esi_2 == ecx_2 && edi_2 == ebx_4)
    data_4ebe42c = ecx_2
else if (esi_2 != edi_2)
    void* ebx_6 = (ebx_4 - edi_2) & 0xfffffffc
    _memcpy(esi_2, edi_2, ebx_6)
    data_4ebe42c = ebx_6 + esi_2

if (*(arg1 + 4) == data_4ebe3ac)
    PostQuitMessage(0)

int32_t result
result.b = 1
return result
