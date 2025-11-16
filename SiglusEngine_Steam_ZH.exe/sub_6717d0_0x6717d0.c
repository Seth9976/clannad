// 函数: sub_6717d0
// 地址: 0x6717d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = data_bac408
char var_8 = 0
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x72c62a25, *(ebx + 0xa8) - *(ebx + 0xa4))
int32_t edx_1 = edx s>> 0xa
int32_t i_5 = (edx_1 u>> 0x1f) + edx_1
int32_t i_4 = i_5

if (i_5 s> 0)
    void* eax_1 = *(ebx + 0xa4)
    int32_t esi_1 = 0
    int32_t* eax_2 = eax_1 + 0x438
    int32_t var_10_1 = 0
    int32_t* var_14_1 = eax_2
    int32_t i_3 = i_5
    int32_t i
    
    do
        int32_t edi_2 = 0
        int32_t eax_3
        int32_t edx_2
        edx_2:eax_3 = muls.dp.d(0x4fba3d0b, eax_2[1] - *eax_2)
        int32_t edx_3 = edx_2 s>> 0xb
        int32_t ebx_3 = (edx_3 u>> 0x1f) + edx_3
        
        if (ebx_3 s> 0)
            void* esi_2 = *(esi_1 + eax_1 + 0x438)
            
            do
                if (sub_5d95e0(esi_2) != 0)
                    var_8 = 1
                    break
                
                edi_2 += 1
                esi_2 += 0x19b0
            while (edi_2 s< ebx_3)
            
            esi_1 = var_10_1
        
        esi_1 += 0x8ec
        eax_2 = &var_14_1[0x23b]
        var_10_1 = esi_1
        i = i_3
        i_3 -= 1
        var_14_1 = eax_2
    while (i != 1)
    i_5 = i_4

void* ecx_5 = data_bac458

if (*(ecx_5 + 0x353) == 0)
    void* eax_7
    
    if (*(data_bac4a0 + 0xcc) != 0)
        eax_7.b = 0
    else if (*(data_bac484 + 0x138) == 0)
        eax_7.b = *(data_bac498 + 2) == 0
    else
        eax_7.b = 0
    
    void* edx_4 = data_bac4c8
    void* ecx_6
    
    if (*(edx_4 + 0x14) != 2)
        if (*(edx_4 + 0x51c) == 2)
            if (eax_7.b != 0 && *(ecx_5 + 0x39b) != 0)
                goto label_671930
            
            ecx_6 = edx_4 + 0x510
            goto label_671922
        
        if (*(edx_4 + 0x1c8c) == 2 && (eax_7.b == 0 || *(ecx_5 + 0x3e6) == 0))
            ecx_6 = edx_4 + 0x1c80
            goto label_671922
        
    label_671930:
        
        if (*(data_bac4e4 + 0x198) != 0)
            int32_t eax_11 = *(edx_4 + 0xfc)
            
            if (eax_11 s> 0)
                *(edx_4 + 0xfc) = eax_11 - 1
                *(data_bac4a0 + 0x1e8) = 1
    else
        char eax_8
        
        if (eax_7.b != 0)
            eax_8 = sub_634fe0()
            edx_4 = data_bac4c8
        
        if (eax_7.b != 0 && eax_8 != 0)
            goto label_671930
        
        ecx_6 = edx_4 + 8
    label_671922:
        
        if (sub_6b1fd0(ecx_6) == 0)
            goto label_671930
        
        *(data_bac4a0 + 0x1e8) = 1

char edx_7 = var_8

if (edx_7 != 0)
    char* result
    
    if (*(data_bac4a0 + 0x1e8) == 0)
        result = sub_620b10()
    
    if (*(data_bac4a0 + 0x1e8) == 0 && result.b == 0)
    label_671a23:
        
        if (edx_7 != 0)
            result.b = 0
            return result
    else
        char var_8_1 = 0
        
        if (i_5 s> 0)
            void* ebx_4 = data_bac408
            int32_t esi_3 = 0
            int32_t var_10_2 = 0
            int32_t i_6 = i_5
            int32_t i_1
            
            do
                int32_t eax_15 = *(ebx_4 + 0xa4)
                int32_t eax_16
                int32_t edx_5
                edx_5:eax_16 =
                    muls.dp.d(0x4fba3d0b, *(esi_3 + eax_15 + 0x43c) - *(esi_3 + eax_15 + 0x438))
                int32_t edx_6 = edx_5 s>> 0xb
                result = (edx_6 u>> 0x1f) + edx_6
                char* var_18_1 = result
                
                if (result s> 0)
                    int32_t edi_3 = 0
                    char* j
                    
                    do
                        void* esi_5 = *(esi_3 + *(ebx_4 + 0xa4) + 0x438) + edi_3
                        sub_5d7f80(esi_5)
                        esi_3 = var_10_2
                        uint32_t ecx_12 = zx.d(var_8_1)
                        
                        if (sub_5d95e0(esi_5) != 0)
                            ecx_12 = 1
                        
                        edi_3 += 0x19b0
                        j = var_18_1
                        var_18_1 -= 1
                        var_8_1.d = ecx_12
                    while (j != 1)
                    i_5 = i_6
                
                esi_3 += 0x8ec
                i_1 = i_5
                i_5 -= 1
                var_10_2 = esi_3
                i_6 = i_5
            while (i_1 != 1)
            edx_7 = var_8_1
            goto label_671a23

if (i_4 s> 0)
    void* esi_6 = data_bac408
    int32_t ebx_5 = 0
    int32_t i_2
    
    do
        int32_t eax_21 = *(esi_6 + 0xa4)
        int32_t eax_22
        int32_t edx_8
        edx_8:eax_22 = muls.dp.d(0x4fba3d0b, *(ebx_5 + eax_21 + 0x43c) - *(ebx_5 + eax_21 + 0x438))
        int32_t edx_9 = edx_8 s>> 0xb
        int32_t j_2 = (edx_9 u>> 0x1f) + edx_9
        
        if (j_2 s> 0)
            int32_t esi_7 = 0
            int32_t j_1
            
            do
                sub_5d9410(*(ebx_5 + *(data_bac408 + 0xa4) + 0x438) + esi_7, 0)
                esi_7 += 0x19b0
                j_1 = j_2
                j_2 -= 1
            while (j_1 != 1)
            esi_6 = data_bac408
        
        ebx_5 += 0x8ec
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

int32_t* ecx_17 = data_bac458
sub_62f9b0(ecx_17, ecx_17[0x57] - 0x158)
void* esi_8 = data_bac458
sub_54ae40(*(esi_8 + 0x15c) - 0xcc)
*(esi_8 + 0x15c) -= 0x158
int32_t eax_27
eax_27.b = 1
return 1
