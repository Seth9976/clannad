// 函数: sub_45ee40
// 地址: 0x45ee40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s>= 0)
    if (arg1 s>= 0x40)
        arg1 = 0
    
    if ((&data_1321ee0)[arg1 * 0x44] != 0)
    label_45ee95:
        data_108f314 = arg1
        
        if (arg2 != 0 || data_108f318 != arg1)
            void* eax_1 = arg1 * 0x110
            data_108f318 = arg1
            data_1cd5324 = 0
            data_1cd531c = 0
            data_1cd533c = 2
            int32_t ecx = *(eax_1 + 0x1321edc)
            int32_t edx_1 = *(eax_1 + 0x1321ed8) - 1
            data_1cd5330 = data_1392ccc
            data_1cd5318 = edx_1
            
            if (ecx s< 0)
                ecx = neg.d(ecx)
            
            HWND hWnd = data_7027bc
            data_1cd5338 = ecx
            data_1cd5334 = 0
            data_1cd5328 = edx_1
            data_1cd5320 = edx_1 != 0
            data_1cd532c = 0
            data_63e150 = 1
            SendMessageA(hWnd, 0x20, 0, 0)
        
        return 
    
    arg1 = 0
    
    if (data_1321ee0 != 0)
        goto label_45ee95

bool cond:0 = data_108f318 == 0xffffffff
data_108f314 = 0xffffffff

if (not(cond:0))
    SendMessageA(data_7027bc, 0x20, 0, 0)

data_108f318 = 0xffffffff
