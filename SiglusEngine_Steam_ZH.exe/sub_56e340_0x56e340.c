// 函数: sub_56e340
// 地址: 0x56e340
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

WPARAM eax = arg2
int32_t* result = eax - 0x469
void* edi_1

if (eax == 0x469)
    edi_1 = arg1 + 0x480
label_56e368:
    
    if (edi_1 != 0)
        HWND eax_1 = sub_6c4c40(edi_1)
        WPARAM eax_2 = sub_6c4be0(edi_1)
        POINT point_1
        __builtin_memset(&point_1, 0, 8)
        GetCursorPos(&point_1)
        POINT point
        point.x = point_1.x
        point.y = point_1.y
        ScreenToClient(*(edi_1 + 4), &point)
        var_c
        result = sub_6c4ed0(edi_1, point.x, point.y, &arg2, &var_c)
        
        if (eax_1 == 1)
            WPARAM esi_2 = arg2
            
            if (eax_2 == esi_2 && point_1.y == 2)
                void var_40
                sub_6c4e40(edi_1, &var_40, esi_2, 2)
                return sub_6c5080(edi_1, esi_2, 2, var_40)
else
    int32_t* result_1 = result
    result -= 1
    
    if (result_1 == 1)
        edi_1 = arg1 + 0x14c
        goto label_56e368
return result
