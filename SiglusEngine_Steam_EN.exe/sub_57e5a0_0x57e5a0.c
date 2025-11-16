// 函数: sub_57e5a0
// 地址: 0x57e5a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 0x3f)
    return 

sub_57e4a0(arg1, arg2)
void* ecx = arg1 * 0x3920
*(ecx + 0xf8c784) = 1

if (*(ecx + 0xf89b40) == 0 || arg2 == 0 || *arg2 == 0)
    return 

int32_t esi_1 = *(arg1 * 0x2d0 + 0x8fcb04)
int32_t ecx_2 = data_1313c88
int32_t var_2c_1 = esi_1

if (esi_1 == 0xffffffff || ecx_2 == 0)
    esi_1 = *(arg1 * 0x2d0 + 0x8fcae8)
    var_2c_1 = esi_1

int32_t var_14_1
int32_t edx_2

if (*(arg1 * 0x1d4 + 0x1090c08) == 0)
    edx_2 = 0xffffffff
    var_14_1 = edx_2
else
    edx_2 = *(arg1 * 0x2d0 + &data_8fcb08)
    var_14_1 = edx_2
    
    if (edx_2 == 0xffffffff || ecx_2 == 0)
        edx_2 = *(arg1 * 0x2d0 + &data_8fcaec)
        var_14_1 = edx_2

char* var_20_1

if (esi_1 u> 0xff)
    var_20_1 = &data_12a2990
else
    var_20_1 = &(&data_12a2990)[esi_1 * 2]

void* var_1c_1

if (edx_2 u> 0xff)
    var_1c_1 = nullptr
else
    var_1c_1 = &(&data_12a2990)[edx_2 * 2]

void* ecx_3 = &(&data_1090ae4)[arg1 * 0x75]
int32_t edi_1 = 6
uint32_t eax_3 = *(ecx_3 + 0x5c)
int32_t edx_4 = *(ecx_3 + 0x60) + eax_3
uint32_t var_c = eax_3
int32_t var_24_1 = edx_4
uint32_t var_30
uint32_t var_18

if (*(ecx_3 + 0x50) != 0)
    char* esi_3 = arg2
    ecx_3 = nullptr
    var_18 = 0
    bool cond:4_1
    
    do
        eax_3.b = *esi_3
        
        if (eax_3.b u< 0x80)
            esi_3 = &esi_3[1]
            ecx_3 += edx_4 s>> 1
        else if (eax_3.b u< 0xa0)
            if (eax_3.b u< 0xfe)
                goto label_57e6bb
            
            esi_3 = &esi_3[1]
            ecx_3 += edx_4 s>> 1
        else if (eax_3.b u<= 0xdf || eax_3.b u>= 0xfe)
            esi_3 = &esi_3[1]
            ecx_3 += edx_4 s>> 1
        else
        label_57e6bb:
            eax_3 = sub_4ebbb0(esi_3)
            var_30 = eax_3
            
            if (eax_3 != 0)
                esi_3 = &esi_3[8]
                edx_4 = var_24_1
                ecx_3 = var_18 + edx_4
            else
                esi_3 = &esi_3[2]
                edx_4 = var_24_1
                ecx_3 = var_18 + edx_4
        
        cond:4_1 = *esi_3 != 0
        var_18 = ecx_3
    while (cond:4_1)
    int32_t eax_7 = *(ecx + 0xf89b38)
    
    if (*(arg1 * 0x1d4 + 0x1090b34) != 1)
        if (ecx_3 s< eax_7)
            edi_1 = eax_7 - ecx_3 - 8
            
            if (edi_1 s< 6)
                edi_1 = 6
        
        eax_3 = var_c
    else if (ecx_3 s>= eax_7)
        eax_3 = var_c
    else
        eax_3 = var_c
        edi_1 = (eax_7 - ecx_3) s>> 1
        
        if (edi_1 s< 6)
            edi_1 = 6

int32_t var_50_1 = 1
int32_t var_5c_1
int32_t var_58_1
int32_t var_54_1

if (data_131923c == 0)
    var_54_1 = 0xffffffff
    var_58_1 = 0xffffffff
    var_5c_1 = 0xffffffff
else
    var_54_1 = 0
    var_58_1 = 0
    var_5c_1 = 0

char* ecx_7
int32_t edx_6
ecx_7, edx_6 = sub_4c6e40(eax_3, eax_3, ecx_3, var_5c_1, var_58_1, var_54_1)
char* eax_8 = arg2
char* esi_4 = eax_8

if (*eax_8 != 0)
    do
        eax_8.b = *esi_4
        
        if (eax_8.b u< 0x80)
        label_57e84b:
            void* var_50_4 = var_1c_1
            uint32_t edx_9 = zx.d(eax_8.b)
            int32_t var_60_3 = *(arg1 * 0x1d4 + 0x1090b40)
            var_18 = edx_9
            ecx_7, edx_6 = sub_57e530(&(&data_1090ae4)[arg1 * 0x75], edx_9, ecx + &data_f89afc, 
                var_60_3, edi_1, ecx_7, var_20_1)
            edi_1 = &(var_24_1 s>> 1)[edi_1]
            esi_4 = &esi_4[1]
        else
            if (eax_8.b u< 0xa0)
                if (eax_8.b u>= 0xfe)
                    goto label_57e84b
            else if (eax_8.b u<= 0xdf || eax_8.b u>= 0xfe)
                goto label_57e84b
            
            uint32_t var_40
            uint32_t var_3c
            uint32_t var_38
            int32_t var_34
            char* ecx_9 = sub_4eba80(&var_18, edx_6, esi_4, &var_18, &var_40, &var_3c, &var_38, 
                &var_34, &var_c, &var_30)
            
            if (var_30 != 0)
                char* ecx_12
                
                if (var_c == 0)
                    ecx_12 = nullptr
                else if (var_2c_1 u> 0xff)
                    ecx_12 = &data_12a2990
                else
                    ecx_12 = &(&data_12a2990)[var_2c_1 * 2]
                
                char* eax_14
                
                if (data_131923c != 0 || var_14_1 u> 0xff)
                    eax_14 = nullptr
                else
                    eax_14 = &(&data_12a2990)[var_14_1 * 2]
                
                eax_8, ecx_7, edx_6 = sub_45e0d0(ecx + &data_f89afc, var_34, ecx + 0xf89b44, 
                    *(arg1 * 0x1d4 + 0x1090b40), edi_1, 6, ecx_12, eax_14, 0xffffffff, 0)
                esi_4 = &esi_4[8]
                edi_1 += var_24_1
            else
                void* var_50_3 = var_1c_1
                eax_8, ecx_7, edx_6 = sub_57e530(ecx + &data_f89afc, var_18, ecx + &data_f89afc, 
                    *(arg1 * 0x1d4 + 0x1090b40), edi_1, ecx_9, var_20_1)
                esi_4 = &esi_4[2]
                edi_1 += var_24_1
    while (*esi_4 != 0)
    
    eax_8 = arg2

sub_460f20(eax_8, eax_8, ecx + &data_f8d35c, var_2c_1.w, var_14_1.w, 1)
