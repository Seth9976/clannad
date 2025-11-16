// 函数: sub_465d70
// 地址: 0x465d70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx = arg1
uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_3c = edi
int32_t* edi_1 = edx[6]
int32_t esi = edi_1[1]
char* ebx = *edi_1
int32_t* var_24 = edx

if (esi != 0)
    goto label_465db3

if (edi_1[3](edx) != 0)
    int32_t eax_1 = edi_1[1]
    ebx = *edi_1
    edx = var_24
    int32_t var_1c_1 = eax_1
    esi = eax_1
label_465db3:
    int32_t ecx_1
    ecx_1:1.b = *ebx
    int32_t esi_1 = esi - 1
    void* ebx_1 = &ebx[1]
    
    if (esi_1 != 0)
        goto label_465ddf
    
    if (edi_1[3](edx) != 0)
        int32_t ecx_2 = edi_1[1]
        ebx_1 = *edi_1
        edx = var_24
        int32_t var_1c_2 = ecx_2
        esi_1 = ecx_2
    label_465ddf:
        int32_t esi_2 = esi_1 - 1
        int32_t ecx_4 = ecx_1 + zx.d(*ebx_1) - 2
        void* ebx_2 = ebx_1 + 1
        int32_t var_1c_3 = esi_2
        int32_t var_28_2 = ecx_4
        int32_t var_20_1
        
        if (ecx_4 s< 0xe)
            int32_t eax_4
            eax_4.b = ecx_4 s<= 0
            var_20_1 = (eax_4 - 1) & ecx_4
        else
            var_20_1 = 0xe
        
        int32_t var_2c_1 = 0
        char var_18[0x10]
        
        if (var_20_1 u> 0)
            int32_t eax_8 = 0
            
            do
                if (esi_2 == 0)
                    int32_t eax_9
                    eax_9, edx = edi_1[3](edx)
                    
                    if (eax_9 == 0)
                        goto label_465e82
                    
                    int32_t ecx_5 = edi_1[1]
                    ebx_2 = *edi_1
                    eax_8 = var_2c_1
                    int32_t var_1c_4 = ecx_5
                    esi_2 = ecx_5
                    ecx_4 = var_28_2
                
                edx.b = *ebx_2
                esi_2 -= 1
                var_18[eax_8] = edx.b
                ebx_2 += 1
                eax_8 += 1
                edx = var_24
                var_1c_3 = esi_2
                var_2c_1 = eax_8
            while (eax_8 u< var_20_1)
        
        int32_t ecx_6 = ecx_4 - var_20_1
        int32_t eax_10 = edx[0x69]
        
        if (eax_10 == 0xe0)
            sub_465af0(var_20_1, edx, ecx_6, edx, &var_18)
            esi_2 = var_1c_3
        else if (eax_10 == 0xee)
            sub_465cd0(var_20_1, &var_18, edx, ecx_6)
            esi_2 = var_1c_3
        else
            void* eax_13 = *edx
            int32_t ecx_7 = edx[0x69]
            *(eax_13 + 0x14) = 0x44
            *(eax_13 + 0x18) = ecx_7
            (*eax_13)(edx)
        
        *edi_1 = ebx_2
        edi_1[1] = esi_2
        
        if (ecx_6 s> 0)
            (*(var_24[6] + 0x10))(var_24, ecx_6)
        
        sub_745f2b(__security_cookie_1)
        return 1

label_465e82:
sub_745f2b(__security_cookie_1)
return 0
