# NNELS Views Custom Handlers

## Fields

All fields will show under the Content grouping.

### Bookshelf Add Field

Add a bookshelf add link for each now.

### Bookshelf Remove Field

Add a bookshelf remove link for each row.

This field requires the Content: Nid field to be added to the view.

### Duplicate S3

Add a duplicate S3 file message.

This field requires the Content: Nid field and the Field: S3 Path field to be added to the view.

### File Size Warning Field

The file size warning field will output some markup if the filesize is greater than 400MB.

This field requires the File: Size field to be added to the view.

### Library Login Field

The library login field will show a login link, application link or warning based on partner status.

This field requires the Indexed Node: Node ID field to be added to the view.

### S3 Path

Add a S3 Path to the row.

This field requires the Field: S3 Path field to be added to the view.

## Headers, Footers, No Results

### Add Button

Displays a button, based on the node that the view is attached to. The path and text are options.

### Feed Icons

Display feed icons.

### No Results

Return a no results message with some options.
### Recently Added Title

Outputs a translated title with some markup.

### Search Warning

Outputs a message for library search.

### Term Title

Outputs a term's name with some markup.

### Term Warning

Outputs a messages related to terms.

## Filters

### S3 Path

Filters the results on configurable pattern is used to match on the Field: S3 path field.

This filter requires the Field: S3 Path field to be added to the view.