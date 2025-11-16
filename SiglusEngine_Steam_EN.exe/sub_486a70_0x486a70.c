// 函数: sub_486a70
// 地址: 0x486a70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1b8a6cc
uint32_t result_3 = data_1b8a6c8
int32_t esi = result_3 + eax

if (data_1b8a6d4 == 0)
    esi = data_131310c

int32_t esi_1 = esi - eax
uint32_t result_1

if (esi_1 u< result_3)
    int32_t edx_1 = 0
    int32_t eax_2 = result_3 * esi_1
    
    if (result_3 s< 0)
        int32_t result_2 = neg.d(divu.dp.d(edx_1:(neg.d(eax_2)), result_3))
        
        if (result_2 s< result_3)
            result_2 = result_3
        
        result_1 = result_2
    else
        uint32_t result_4 = divu.dp.d(edx_1:eax_2, result_3)
        result_1 = result_4
        
        if (result_4 s> result_3)
            result_1 = result_3
else
    result_1 = result_3

void* ebx

if (esi_1 u< result_3)
    int32_t ebx_1 = data_1b8a680
    int32_t edx_4 = 0
    void* edi_1 = data_1b8a684
    
    if (ebx_1 s> edi_1)
        ebx = ebx_1 - divu.dp.d(edx_4:((ebx_1 - edi_1) * esi_1), result_3)
        
        if (ebx s< edi_1)
            ebx = edi_1
    else
        ebx = divu.dp.d(edx_4:((edi_1 - ebx_1) * esi_1), result_3) + data_1b8a680
        
        if (ebx s> edi_1)
            ebx = edi_1
else
    ebx = data_1b8a684

int32_t var_18

if (esi_1 u< result_3)
    int32_t edx_7 = data_1b8a688
    int32_t edi_2 = data_1b8a68c
    
    if (edx_7 s> edi_2)
        int32_t edx_12 = data_1b8a688 - divu.dp.d(0:((edx_7 - edi_2) * esi_1), result_3)
        
        if (edx_12 s< edi_2)
            edx_12 = edi_2
        
        var_18 = edx_12
    else
        int32_t eax_19 = divu.dp.d(0:((edi_2 - edx_7) * esi_1), result_3) + data_1b8a688
        var_18 = eax_19
        
        if (eax_19 s> edi_2)
            var_18 = edi_2
else
    var_18 = data_1b8a68c

void* var_14

if (esi_1 u< result_3)
    int32_t edx_13 = data_1b8a690
    void* edi_3 = data_1b8a694
    
    if (edx_13 s> edi_3)
        void* edx_18 = data_1b8a690 - divu.dp.d(0:((edx_13 - edi_3) * esi_1), result_3)
        
        if (edx_18 s< edi_3)
            edx_18 = edi_3
        
        var_14 = edx_18
    else
        void* eax_29 = divu.dp.d(0:((edi_3 - edx_13) * esi_1), result_3) + data_1b8a690
        var_14 = eax_29
        
        if (eax_29 s> edi_3)
            var_14 = edi_3
else
    var_14 = data_1b8a694

int32_t edi_4 = data_1b8a69c

if (esi_1 u< result_3)
    int32_t edx_19 = data_1b8a698
    
    if (edx_19 s> edi_4)
        int32_t edx_24 = data_1b8a698 - divu.dp.d(0:((edx_19 - edi_4) * esi_1), result_3)
        
        if (edx_24 s< edi_4)
            edx_24 = edi_4
        
        edi_4 = edx_24
    else
        int32_t eax_38 = divu.dp.d(0:((edi_4 - edx_19) * esi_1), result_3) + data_1b8a698
        
        if (eax_38 s<= edi_4)
            edi_4 = eax_38

int32_t var_10_2

if (esi_1 u< result_3 && esi_1 u< result_3)
    int32_t eax_44 = data_1b8a6a4
    int32_t edx_25 = data_1b8a6a8
    int32_t edx_27
    
    if (eax_44 s> edx_25)
        edx_27 = data_1b8a6a4 - divu.dp.d(0:((eax_44 - edx_25) * esi_1), result_3)
        
        if (edx_27 s< data_1b8a6a8)
            edx_27 = data_1b8a6a8
        
        var_10_2 = edx_27
    else
        edx_27 = data_1b8a6a8
        int32_t eax_49 = divu.dp.d(0:((edx_25 - data_1b8a6a4) * esi_1), result_3) + data_1b8a6a4
        var_10_2 = eax_49
        
        if (eax_49 s> edx_27)
            var_10_2 = edx_27
else
    var_10_2 = data_1b8a6a8

int32_t var_c_1

if (esi_1 u< result_3)
    int32_t eax_54 = data_1b8a6ac
    int32_t edx_30 = data_1b8a6b0
    int32_t edx_32
    
    if (eax_54 s> edx_30)
        edx_32 = data_1b8a6ac - divu.dp.d(0:((eax_54 - edx_30) * esi_1), result_3)
        
        if (edx_32 s< data_1b8a6b0)
            edx_32 = data_1b8a6b0
        
        var_c_1 = edx_32
    else
        edx_32 = data_1b8a6b0
        int32_t eax_59 = divu.dp.d(0:((edx_30 - data_1b8a6ac) * esi_1), result_3) + data_1b8a6ac
        var_c_1 = eax_59
        
        if (eax_59 s> edx_32)
            var_c_1 = edx_32
else
    var_c_1 = data_1b8a6b0

int32_t var_8_1
int32_t eax_63

if (esi_1 u< result_3)
    int32_t eax_64 = data_1b8a6b4
    int32_t edx_35 = data_1b8a6b8
    int32_t edx_37
    
    if (eax_64 s> edx_35)
        eax_63 = divu.dp.d(0:((eax_64 - edx_35) * esi_1), result_3)
        edx_37 = data_1b8a6b4 - eax_63
        
        if (edx_37 s< data_1b8a6b8)
            edx_37 = data_1b8a6b8
        
        var_8_1 = edx_37
    else
        edx_37 = data_1b8a6b8
        eax_63 = divu.dp.d(0:((edx_35 - data_1b8a6b4) * esi_1), result_3) + data_1b8a6b4
        var_8_1 = eax_63
        
        if (eax_63 s> edx_37)
            var_8_1 = edx_37
else
    eax_63 = data_1b8a6b8
    var_8_1 = eax_63

int32_t ecx

if (esi_1 u< result_3)
    int32_t eax_71 = data_1b8a6bc
    int32_t edx_40 = data_1b8a6c0
    
    if (eax_71 s> edx_40)
        eax_63 = divu.dp.d(0:((eax_71 - edx_40) * esi_1), result_3)
        ecx = data_1b8a6bc - eax_63
        
        if (ecx s< data_1b8a6c0)
            ecx = data_1b8a6c0
    else
        eax_63 = data_1b8a6c0
        ecx = divu.dp.d(0:((edx_40 - data_1b8a6bc) * esi_1), result_3) + data_1b8a6bc
        
        if (ecx s> eax_63)
            ecx = eax_63
else
    ecx = data_1b8a6c0

sub_413480(eax_63, var_18, ebx, var_14, edi_4, data_1b8a6a0, var_10_2, var_c_1, var_8_1, ecx, 
    data_1b8a6c4, 0xff, 0)
uint32_t result = result_1

if (result == data_1b8a6c8)
    if (data_1af1768 != 0)
        data_1af177c = 1
        data_1af1768 = 0
    
    sub_48d140()
    result = data_1af1788
    
    if (data_71929c == 0x11)
        result = 1
    
    data_1af1788 = result

return result
