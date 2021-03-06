#include "robomongo/gui/widgets/explorer/ExplorerDatabaseCategoryTreeItem.h"
#include "robomongo/gui/widgets/explorer/ExplorerDatabaseTreeItem.h"

namespace Robomongo
{

ExplorerDatabaseCategoryTreeItem::ExplorerDatabaseCategoryTreeItem(ExplorerDatabaseCategory category,
                                                                   ExplorerDatabaseTreeItem *databaseItem) :
    _category(category),
    _databaseItem(databaseItem) {}
}
