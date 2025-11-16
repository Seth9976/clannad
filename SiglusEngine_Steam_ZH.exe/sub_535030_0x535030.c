// 函数: sub_535030
// 地址: 0x535030
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b0050
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** hWnd = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 8) != 0)
    hWnd = *(arg1 + 0x410)
    
    if (hWnd s> 0)
        char var_52_1 = 0
        int32_t edi_1 = 0
        struct _EXCEPTION_REGISTRATION_RECORD** hWnd_5 = nullptr
        int32_t ecx_10
        
        do
            int32_t* edx_1 = *(arg1 + 0x420)
            char* ebx_1 = *(data_bac4e4 + 0x160) + (*(edx_1 + edi_1) << 3)
            LRESULT hWnd_1 = *(edx_1 + edi_1 + 8)
            int32_t ecx
            
            if (hWnd_1 != 0)
                hWnd_1, ecx = SendMessageW(hWnd_1, 0xf0, 0, 0)
            
            ecx.b = *ebx_1
            hWnd_1.b &= 1
            
            if (ecx.b != hWnd_1.b)
                HWND hWnd_4 = *(*(arg1 + 0x420) + edi_1 + 8)
                
                if (hWnd_4 != 0)
                    WPARAM wParam
                    wParam.b = ecx.b != 0
                    SendMessageW(hWnd_4, 0xf1, wParam, 0)
            
            LRESULT hWnd_2 = *(*(arg1 + 0x420) + edi_1 + 0x9c)
            
            if (hWnd_2 != 0)
                hWnd_2 = SendMessageW(hWnd_2, 0x400, 0, 0)
            
            LPARAM lParam = *(ebx_1 + 4)
            
            if (lParam != hWnd_2)
                HWND hWnd_3 = *(*(arg1 + 0x420) + edi_1 + 0x9c)
                
                if (hWnd_3 != 0)
                    SendMessageW(hWnd_3, 0x405, 1, lParam)
            
            int32_t* edx_2 = *(arg1 + 0x420)
            void* ebx_2 = *data_bac4ec + *(edx_2 + edi_1) * 0x1c
            void* ecx_4 = &edx_2[1] + edi_1
            void** var_68_5
            
            if (*(ebx_2 + 0x18) == 0)
                int16_t var_34
                int16_t* eax_15 = sub_6c2ec0(ecx_4, &var_34)
                int32_t var_c_3 = 1
                void* ebx_3 = data_bac510
                int32_t edx_3 = *(eax_15 + 0x10)
                
                if (*(eax_15 + 0x14) u>= 8)
                    eax_15 = *eax_15
                
                int32_t var_68_7 = edx_3
                int32_t var_c_4 = 0xffffffff
                int32_t eax_16
                eax_16.b =
                    sub_536340(ebx_3 + 0x103f4, ebx_3 + 0x103f4, *(ebx_3 + 0x10404), eax_15) != 0
                char var_51_2 = eax_16.b
                int32_t var_20
                
                if (var_20 u>= 8)
                    j__free(var_34.d)
                    ebx_3 = data_bac510
                    eax_16.b = var_51_2
                
                var_20 = 7
                int32_t var_24_1 = 0
                var_34 = 0
                
                if (eax_16.b == 0)
                    ecx_10.b = var_52_1
                else
                    var_68_5 = ebx_3 + 0x103f4
                label_5351db:
                    sub_6c2db0(*(arg1 + 0x420) + 4 + edi_1, var_68_5)
                    ecx_10.b = 1
                    var_52_1 = 1
            else
                int16_t var_4c
                int16_t* eax_13 = sub_6c2ec0(ecx_4, &var_4c)
                int32_t var_c_1 = 0
                int32_t ecx_5 = *(eax_13 + 0x10)
                
                if (*(eax_13 + 0x14) u>= 8)
                    eax_13 = *eax_13
                
                int32_t var_68_3 = ecx_5
                int32_t var_c_2 = 0xffffffff
                int32_t eax_14
                eax_14.b = sub_536340(ebx_2, ecx_5, *(ebx_2 + 0x10), eax_13) != 0
                char var_51_1 = eax_14.b
                int32_t var_38
                
                if (var_38 u>= 8)
                    j__free(var_4c.d)
                    eax_14.b = var_51_1
                
                var_38 = 7
                int32_t var_3c_1 = 0
                var_4c = 0
                
                if (eax_14.b != 0)
                    var_68_5 = ebx_2
                    goto label_5351db
                
                ecx_10.b = var_52_1
            edi_1 += 0x12c
            hWnd = hWnd_5 + 1
            hWnd_5 = hWnd
        while (hWnd s< *(arg1 + 0x410))
        
        if (ecx_10.b != 0)
            int32_t i = 0
            *(arg1 + 0x418) = 0xfffffc19
            
            if (*(arg1 + 0x410) s> 0)
                int32_t ebx_4 = 0
                
                do
                    void* ecx_14 = *(arg1 + 0x420) + ebx_4
                    void* var_68_9 = ecx_14
                    int32_t eax_19 = sub_6c3030(ecx_14 + 4, 0x14)
                    
                    if (*(arg1 + 0x41c) s< eax_19)
                        *(arg1 + 0x41c) = eax_19
                    
                    i += 1
                    ebx_4 += 0x12c
                while (i s< *(arg1 + 0x410))
            
            sub_5353d0(arg1)
            hWnd = *(arg1 + 0x144)
            
            if (hWnd != 0)
                hWnd = InvalidateRect(hWnd, nullptr, 0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_54)
return hWnd
