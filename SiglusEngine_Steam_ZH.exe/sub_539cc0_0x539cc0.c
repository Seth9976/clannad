// 函数: sub_539cc0
// 地址: 0x539cc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
void* ebx = arg1
HWND hWnd = *(ebx + 0xb0)

if (hWnd != 0)
    arg1 = SendMessageW(hWnd, 0x184, 0, 0)

int32_t eax_4 = *(data_bac510 + 0x10bd8) - 1
int32_t eax_5 = neg.d(eax_4)
int32_t var_3c = sbb.d(eax_5, eax_5, eax_4 != 0) + 2
void* var_40 = arg1
void* eax_8
eax_8.b = *(data_bac4e4 + 0x119) == 0
void* result = sub_6b0090(ebx + 0x6e0, *(ebx + 8), arg1.b, zx.d(eax_8.b))

if (result.b != 0)
    void* ecx_1 = *(ebx + 0x6e0)
    int32_t var_28_1 = 0
    result = (*(ebx + 0x6e4) - ecx_1) s/ 0x11c
    
    if (result s> 0)
        int16_t* edi_1 = ecx_1 + 0x1c
        int32_t esi_4
        
        do
            int32_t eax_15 = 0
            int32_t var_10_1 = 7
            int32_t var_14_1 = 0
            int16_t var_24 = 0
            
            if (*edi_1 != 0)
                int16_t* eax_13 = edi_1
                
                do
                    ecx_1.w = *eax_13
                    eax_13 = &eax_13[1]
                while (ecx_1.w != 0)
                
                eax_15 = (eax_13 - &eax_13[1]) s>> 1
            
            sub_52e720(&var_24, edi_1, eax_15)
            int32_t eax_16 = var_10_1
            int16_t* lParam = &var_24
            int16_t* lParam_1 = var_24.d
            HWND hWnd_1 = *(ebx + 0xb0)
            
            if (eax_16 u>= 8)
                lParam = lParam_1
            
            if (hWnd_1 != 0)
                SendMessageW(hWnd_1, 0x180, 0, lParam)
                eax_16 = var_10_1
                lParam_1 = var_24.d
            
            if (eax_16 u>= 8)
                j__free(lParam_1)
            
            edi_1 = &edi_1[0x8e]
            esi_4 = var_28_1 + 1
            var_28_1 = esi_4
            result = (*(ebx + 0x6e4) - *(ebx + 0x6e0)) s/ 0x11c
        while (esi_4 s< result)

if (*(ebx + 8) != 0)
    void** eax_21 = data_bac4e4 + 0x11c
    
    if (ebx + 0x71c != eax_21)
        sub_52e3c0(ebx + 0x71c, eax_21, 0, 0xffffffff)
    
    result = sub_539e60(ebx)

sub_745f2b(eax_1 ^ &var_2c)
return result
