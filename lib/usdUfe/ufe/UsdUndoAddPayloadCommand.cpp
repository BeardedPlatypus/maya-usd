//
// Copyright 2023 Autodesk
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#include "UsdUndoAddPayloadCommand.h"

namespace USDUFE_NS_DEF {

UsdUndoAddPayloadCommand::UsdUndoAddPayloadCommand(
    const PXR_NS::UsdPrim& prim,
    const std::string&     filePath,
    bool                   prepend)
    : UsdUndoAddPayloadCommand(prim, filePath, {}, prepend)
{
}

UsdUndoAddPayloadCommand::UsdUndoAddPayloadCommand(
    const PXR_NS::UsdPrim& prim,
    const std::string&     filePath,
    const std::string&     primPath,
    bool                   prepend)
    : UsdUndoAddRefOrPayloadCommand(prim, filePath, primPath, getListPosition(prepend), true)
{
}

} // namespace USDUFE_NS_DEF
